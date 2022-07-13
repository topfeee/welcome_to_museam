print("****************************************************************")
print("\nwelcome to museum  price for foreigner is 20000/1ticket \n ")
print("ຍິນດີຕ້ອນຮັບເຂົ້າສູ່ຫໍພິພິດຕະພັນ ລາຄາປີ້ສໍາຫລັບຄົນລາວແມ່ນ 10000/1ປີ້ \n")
print("****************************************************************\n")
while (1):
    def dcm(n):
        return ("{:,.2f}".format(n))
    a = int(input("Foreigner press 1 ຄົນລາວກົດ 2 \n => "))
    if a == 1:
        print("If you come with 10 or more , you will get a 20% discount.\n\n")
        b = int(input("how many tickets do you want? :"))
        if b >= 10:
            print("discount for %d tickets :" % b, dcm(b * 20000 * 0.2), "kip")
            print("\n special total price that you must pay :", dcm(b * 20000 - (b * 20000 * 0.2)), "kip")
        else:
            print("general total price for %d tickets (no discount):" % b, dcm(b * 20000), "kip")

    elif a == 2:
        print("ຖ້າທ່ານຊື້10ປີ້ ຂື້ນໄປຈະໄດ້ຮັບສ່ວນຫລຸດ 50% ສະເພາະລູກຄ້າທີ່ເປັນຄົນລາວ.\n\n")
        c = int(input("how many tickets do you want?: "))
        if c >= 10:
            print("ສ່ວນຫລຸດທີ່ທ່ານໄດ້ຮັບແມ່ນ ສໍາລັບ %d ປີ້ :" % c, dcm(c * 10000 * 0.5))
            print("\n ລາຄາພິດເສດທັງຫມົດທີ່ທ່ານຕ້ອງຈ່າຍແມ່ນ :", dcm(c * 10000 - (c * 10000 * 0.5)), "kip")
        else:
            print("ລາຄາທົ່ວໄປມີ່ທ່ານຈະຕ້ອງຈ່າຍ ສໍາລັບ %d ປີ້ (ບໍ່ມີສ່ວນຫລຸດ) :" % c, dcm(c * 10000), "kip")

    else:
        print("you are out of range only 1 or 2 \n ")

    print("\n\nທ່ານຕ້ອງການສືບຕໍ່ຫລືບໍ່ (y or n)")
    v = str(input("do you want to continue? (y or n)\n => "))
    if v == "y":
        continue
    else:
        print("good luck")
        print("ຂໍໃຫ້ໂຊກດີ")
        break
