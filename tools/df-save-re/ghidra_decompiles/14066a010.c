// FUN_14066a010 @ 14066a010
// callees:
//   -> 140004830 FUN_140004830
//   -> 140168eb0 FUN_140168eb0
//   -> 140168dc0 FUN_140168dc0
//   -> 140dfb5c4 operator_new
//   -> 1405b1950 FUN_1405b1950
//   -> 140da8aa0 FUN_140da8aa0


void FUN_14066a010(short param_1,short param_2,short param_3)

{
  char cVar1;
  ushort uVar2;
  void *pvVar3;
  short *psVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  
  if ((((DAT_141ebec62 == '\0') && (-1 < param_1)) && (param_1 < DAT_141d69554)) &&
     (((-1 < param_2 && (param_2 < DAT_141d69558)) && ((-1 < param_3 && (param_3 < DAT_141d6955c))))
     )) {
    uVar2 = FUN_140004830(&DAT_141c53470,param_1,param_2,param_3,0xfffffffffffffffe);
    if (((uVar2 != 0x23) && (uVar2 != 0x2a)) &&
       ((uVar2 != 0x43 &&
        ((((uVar2 != 0x46 && (5 < uVar2 - 0x47)) && (1 < (ushort)(uVar2 - 0x103))) &&
         (cVar1 = FUN_140168eb0(&DAT_141c53470,param_1,param_2,param_3), cVar1 == '\0')))))) {
      cVar1 = FUN_140168dc0(&DAT_141c53470,param_1,param_2,param_3);
      if (cVar1 == '\0') {
        return;
      }
      iVar6 = 0;
      uVar7 = DAT_141c53508 - (longlong)DAT_141c53500 >> 3;
      puVar5 = DAT_141c53500;
      if (uVar7 != 0) {
        do {
          psVar4 = (short *)*puVar5;
          if (((*psVar4 == param_1) && (psVar4[1] == param_2)) && (psVar4[2] == param_3)) {
            return;
          }
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 1;
        } while ((ulonglong)(longlong)iVar6 < uVar7);
      }
      pvVar3 = operator_new(6);
      psVar4 = (short *)FUN_1405b1950(pvVar3);
      *psVar4 = param_1;
      psVar4[1] = param_2;
      psVar4[2] = param_3;
      return;
    }
    FUN_140da8aa0(&DAT_141c53470,param_1,param_2,param_3);
  }
  return;
}

