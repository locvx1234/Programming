import math
import copy
 
"""
    Network Sub-Netting Calculator
    Written by: Yancy Vance M. Paredes
    Date: August 20, 2014
"""
 
class Network:
    """This class contains methods that can be used to manipulate
    information about a network.
    """
     
    def __init__(self, ip, prefix):
        """Initialize the network information."""
        self.net_addr = []
        self.copy_addr = []
        self.prefix = prefix
        ip = ip.split(".")
        ad = "1"*prefix + "0"*(32-prefix)
        octet = [ad[0:8], ad[8:16], ad[16:24], ad[24:32]]
 
        for p in range(len(ip)):
            a = int(ip[p])
            b = int(octet[p], 2)
            self.net_addr.append(a&b)
        #print "Network Address:", self.net_addr
 
    def subnet(self, count):
        """This will only sub-net a network into a power of 2 network."""
         
        # compute for the exponent to reach the target subnet
        d = int(math.log(count, 2))
 
        # identify the target prefix
        target = self.prefix + d
         
        # compute for the subnet mask of the target prefix
        ad = "1"*target + "0"*(32-target)
        octet = [ad[0:8], ad[8:16], ad[16:24], ad[24:32]]
        #print octet
         
        # identify which octet to move based on the destination
        move = math.ceil( target / 8.0 )
        host = (move*8) - target
         
        # identify the interval of every network
        jump = 2**host
 
        # use a temporary storage
        self.copy_addr = copy.deepcopy(self.net_addr)
        for i in range(count):
            print "#%d %-15s /%d" % (i+1, ".".join(map(str, self.copy_addr)), target)
            self.add(move, jump)
             
        print "Every subnet has %d usable IP addresses" % (2**(32-target)-2)
 
    def add(self, octet, value):
        """Add values to the octet and normalizes it if overflow occurs."""
        octet = int(octet)
     
        self.copy_addr[octet-1] = self.copy_addr[octet-1] + int(value)
         
        # from the octet with the movement, moving to the left
        for i in range(octet-1, -1, -1):
            if self.copy_addr[i] >= 256:
                self.copy_addr[i] = 0
                self.copy_addr[i-1] = self.copy_addr[i-1] + 1
     
if __name__ == "__main__":
    net = raw_input("Enter Network (d.d.d.d): ")
    pre = int(raw_input("Enter Prefix: "))
     
    # create the Network object
    n = Network(net, pre)
     
    sub = int(raw_input("Enter Number of Subnets (powers of 2 only): "))
     
    # subnets the network into sub equal parts
    n.subnet(sub)