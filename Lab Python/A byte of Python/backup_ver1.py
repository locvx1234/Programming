#!/usr/bin/python
#Filename: backup_ver1.py
import os
import time

#1. The files and directories to be backed up are specified in a list.
source = ['/home/locvx/swaroop/byte', '/home/locvx/swaroop/bin']
# If you are using Windows, use source = [r'C:\Documents', r'D:\Work'] or something

#2. The backup must be stored in a main backup directory
target_dir = '/home/locvx/filename' #Remember to change this to what you will be using

#3. The files are backed up into a zip file.
#4. The name of the zip archive is the current date and time
target = target_dir + time.strftime('-%Y-%m-%d-%H-%M-%S') + '.zip'  #ten file backup : filename + nam + thang + ngay + gio + phut + giay + .zip

#5. We use the zip command (in Unix/Linux) to put the file in a zip archive
zip_command = "zip -qr '%s' %s" % (target, ' '.join(source))

#Run the backup
if os.system(zip_command) == 0:
	print 'Successful backup to', target
else:
	print 'Backup FAILED'