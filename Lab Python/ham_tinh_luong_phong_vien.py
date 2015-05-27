#tinh luong phong vien

def luong(ngay_cong = 0, bai_viet = 0):
    if bai_viet > 200:
        thuc_linh = ngay_cong*150000 + 0.05*bai_viet*5000
    else:
        thuc_linh = ngay_cong*150000
    print thuc_linh
luong (30, 201)
