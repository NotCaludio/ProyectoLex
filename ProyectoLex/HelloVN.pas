{************************************************}
{ Day la vi du Pascal don gian xuat ra chu viet  }
{ trong Turbo Pascal                             }
{ Tao boi Thien Hau                              }
{************************************************}

program hellovn; { khai bao chuong trinh }
USES tcvn, crt;
{ khai bao thu vien TCVN de viet chu Tieng Viet, co the dung them crt}
BEGIN { Dau chuong trinh }
clrscr; { xoa/lam moi man hinh }
loadfont; { nap font chu Tieng Viet }
writeln(telex('Ddaay laf moojt dofng tieesng Vieejt (kieeru'),' Telex)');
 { Xuat ra dong chu tieng viet duoc viet theo kieu Telex }
writeln(vni('Da6y la2 mo65t do2ng tie61ng Vie65t (kie63u VNI)'));
 { Xuat ra dong chu tieng viet duoc viet theo kieu VNi }
readln; { Dung man hinh cho den khi nhan nut ENTER }
unloadfont; { go nap font chu Tieng Viet }
END. { Het chuong trinh }
