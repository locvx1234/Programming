#ghi file

file_w = open ("new_file.txt","w")
file_w.write ("Tinh yeu khong tu sinh ra va cung khong tu mat di\nNo chi co the chuyen tu nguoi nay sang nguoi khac")
file_w.close()

#Doc file
file_r = open ("new_file.txt","r")
print file_r.read()
file_r.close()

