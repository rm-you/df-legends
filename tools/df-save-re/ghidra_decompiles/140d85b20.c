// FUN_140d85b20 @ 140d85b20
// callees:
//   -> 140367840 FUN_140367840
//   -> 1400048f0 FUN_1400048f0
//   -> 140004830 FUN_140004830
//   -> 140d868e0 FUN_140d868e0
//   -> 14013b560 FUN_14013b560
//   -> 1400c05e0 FUN_1400c05e0
//   -> 1409f0480 FUN_1409f0480


byte FUN_140d85b20(longlong param_1,short param_2,short param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  
  if ((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x1160e4))) && (-1 < param_3)) &&
     ((int)param_3 < *(int *)(param_1 + 0x1160e8))) {
    cVar1 = FUN_140367840();
    if (cVar1 == '\0') {
      uVar4 = FUN_1400048f0(param_1,param_2);
      if ((uVar4 >> 0x11 & 1) == 0) {
        uVar3 = FUN_140004830(param_1,param_2);
        if (uVar3 - 0x171 < 8) {
          bVar2 = 0;
        }
        else {
          cVar1 = FUN_140d868e0(param_1,param_2);
          if ((cVar1 == '\0') &&
             (((cVar1 = FUN_14013b560(uVar3), cVar1 == '\0' || (uVar3 == 0x5c)) || (uVar3 == 0x84)))
             ) {
            cVar1 = FUN_1400c05e0(uVar3);
            if ((cVar1 == '\0') || ((uVar4 >> 0x10 & 1) != 0)) {
              bVar2 = 2;
            }
            else {
              bVar2 = 1;
            }
          }
          else {
            cVar1 = FUN_1409f0480(uVar3);
            bVar2 = -(cVar1 != '\0') & 3;
          }
        }
      }
      else {
        bVar2 = 2;
      }
      return bVar2;
    }
    return 0;
  }
  return 2;
}

