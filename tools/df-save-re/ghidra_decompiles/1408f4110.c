// FUN_1408f4110 @ 1408f4110
// callees:
//   -> 14013bfd0 FUN_14013bfd0
//   -> 140d89e40 FUN_140d89e40
//   -> 1403647e0 FUN_1403647e0
//   -> 1403647b0 FUN_1403647b0
//   -> 140004830 FUN_140004830
//   -> 140d2cb70 FUN_140d2cb70
//   -> 14014e2f0 FUN_14014e2f0
//   -> 1408deb00 FUN_1408deb00
//   -> 1400b79a0 FUN_1400b79a0


bool FUN_1408f4110(longlong param_1,short param_2,short param_3,short param_4,short param_5,
                  short param_6,short param_7,uint param_8,char param_9,char param_10,
                  ushort param_11,int param_12,char param_13)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  undefined2 uVar4;
  short sVar5;
  ulonglong uVar6;
  uint in_stack_ffffffffffffffb0;
  uint3 uVar8;
  uint uVar7;
  
  if ((param_8 >> 0x18 & 1) != 0) {
    if (((((-1 < param_5) && (-1 < param_6)) && (-1 < param_7)) &&
        (((int)param_5 < *(int *)(param_1 + 0x1160e4) &&
         ((int)param_6 < *(int *)(param_1 + 0x1160e8))))) &&
       ((int)param_7 < *(int *)(param_1 + 0x1160ec))) {
      cVar1 = FUN_14013bfd0();
      return cVar1 != '\0';
    }
    return false;
  }
  if ((param_9 != '\0') &&
     (in_stack_ffffffffffffffb0 = param_8,
     cVar1 = FUN_140d89e40(param_1,param_2,param_3,param_4,1,param_8), cVar1 == '\0')) {
    return false;
  }
  if ((param_10 == '\0') ||
     (in_stack_ffffffffffffffb0 = param_8,
     cVar1 = FUN_140d89e40(param_1,param_5,param_6,param_7,1,param_8), cVar1 != '\0')) {
    if (param_4 != param_7) {
      if ((int)param_7 == param_4 + 1) {
        if ((param_2 == param_5) && (param_3 == param_6)) {
          uVar6 = (ulonglong)param_11;
          cVar1 = FUN_1403647e0(uVar6);
          if ((cVar1 != '\0') || (cVar1 = FUN_1403647b0(uVar6 & 0xffff), cVar1 != '\0')) {
            uVar3 = FUN_140004830(param_1,param_5,param_6,param_7);
            if (((0x3e < uVar3) || ((0x4924012004000020U >> ((ulonglong)uVar3 & 0x3f) & 1) == 0)) &&
               (uVar3 != 0x200)) {
              uVar4 = FUN_140004830(param_1,param_5,param_6,param_7);
              cVar1 = FUN_1403647b0(uVar4);
              if (cVar1 == '\0') goto LAB_1408f43b7;
            }
            in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb0 & 0xffffff00;
            cVar1 = FUN_140d2cb70(param_1,param_5,param_6,param_7,1,in_stack_ffffffffffffffb0,0,1,
                                  param_8);
            if (cVar1 != '\0') {
              return true;
            }
          }
        }
        else {
          cVar1 = FUN_14014e2f0(param_11);
          if (cVar1 != '\0') {
            in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb0 & 0xffffff00;
            cVar1 = FUN_140d2cb70(param_1,param_2,param_3,param_7,0,in_stack_ffffffffffffffb0,0,1,
                                  param_8);
            if ((cVar1 != '\0') &&
               ((((sVar5 = FUN_140004830(param_1,param_2,param_3,param_7), sVar5 == 1 ||
                  (sVar5 == 0x20)) || (sVar5 == 0x23)) || (sVar5 == 0x2a)))) {
              uVar4 = FUN_140004830(param_1,param_5,param_6,param_4);
              cVar1 = FUN_1408deb00(uVar4);
              if (cVar1 != '\0') goto LAB_1408f45c8;
            }
          }
        }
LAB_1408f43b7:
        if ((param_8 & 0x12800) == 0) goto LAB_1408f4760;
        uVar8 = (uint3)(in_stack_ffffffffffffffb0 >> 8);
        if ((param_2 == param_5) && (param_3 == param_6)) {
          cVar1 = FUN_140d2cb70(param_1,param_5,param_6,param_7,1,(uint)uVar8 << 8,0,1,param_8);
joined_r0x0001408f448c:
          if (cVar1 == '\0') goto LAB_1408f4760;
        }
        else {
          uVar7 = (uint)uVar8 << 8;
          cVar1 = FUN_140d2cb70(&DAT_141c53470,param_5,param_6,param_7,1,uVar7,0,1,param_8);
          if ((cVar1 == '\0') ||
             (uVar7 = param_8, cVar1 = FUN_140d89e40(param_1,param_5,param_6,param_4,1,param_8),
             cVar1 == '\0')) {
            cVar1 = FUN_140d2cb70(&DAT_141c53470,param_2,param_3,param_7,1,uVar7 & 0xffffff00,0,1,
                                  param_8);
            goto joined_r0x0001408f448c;
          }
        }
        cVar1 = FUN_1400b79a0(param_1,param_5,param_6,param_7);
        if (param_13 == '\a') {
          if (param_12 == 0) {
            if ((param_8 & 0x2000) != 0) {
              return true;
            }
          }
          else if ((param_12 == 0x200000) && ((param_8 >> 0x10 & 1) != 0)) {
            return true;
          }
LAB_1408f44e3:
          if ('\x06' < cVar1) goto LAB_1408f4760;
        }
        else if ('\x06' < param_13) goto LAB_1408f44e3;
        if ((param_8 >> 0xb & 1) != 0) {
          return true;
        }
        goto LAB_1408f4760;
      }
      if ((int)param_7 != param_4 + -1) goto LAB_1408f4760;
      if ((param_2 == param_5) && (param_3 == param_6)) {
        if ((((param_11 < 0x3f) && ((0x4924012004000020U >> ((ulonglong)param_11 & 0x3f) & 1) != 0))
            || (param_11 == 0x200)) || (cVar1 = FUN_1403647b0((ulonglong)param_11), cVar1 != '\0'))
        {
          uVar4 = FUN_140004830(param_1,param_5,param_6,param_7);
          cVar1 = FUN_1403647e0(uVar4);
          if (cVar1 == '\0') {
            uVar4 = FUN_140004830(param_1,param_5);
            cVar1 = FUN_1403647b0(uVar4);
            if (cVar1 == '\0') goto LAB_1408f4656;
          }
          in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb0 & 0xffffff00;
          cVar1 = FUN_140d2cb70(param_1,param_2,param_3,param_4,1,in_stack_ffffffffffffffb0,0,1,
                                param_8);
joined_r0x0001408f4650:
          if (cVar1 != '\0') goto LAB_1408f45c8;
        }
      }
      else {
        sVar5 = FUN_140004830(param_1,param_5,param_6,param_4);
        if (sVar5 == 1) {
          uVar4 = FUN_140004830(param_1,param_5);
          cVar1 = FUN_14014e2f0(uVar4);
          if (cVar1 != '\0') {
            uVar4 = FUN_140004830(param_1,param_2,param_3,param_7);
            cVar1 = FUN_1408deb00(uVar4);
            if (cVar1 != '\0') {
              in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb0 & 0xffffff00;
              cVar1 = FUN_140d2cb70(param_1,param_5,param_6,param_4,0,in_stack_ffffffffffffffb0,0,1,
                                    param_8);
              goto joined_r0x0001408f4650;
            }
          }
        }
      }
LAB_1408f4656:
      if ((param_8 & 0x12800) == 0) goto LAB_1408f4760;
      uVar8 = (uint3)(in_stack_ffffffffffffffb0 >> 8);
      if ((param_2 == param_5) && (param_3 == param_6)) {
        cVar1 = FUN_140d2cb70(param_1,param_2,param_3,param_4,1,(uint)uVar8 << 8,0,1,param_8);
joined_r0x0001408f472b:
        if (cVar1 == '\0') goto LAB_1408f4760;
      }
      else {
        uVar7 = (uint)uVar8 << 8;
        cVar1 = FUN_140d2cb70(&DAT_141c53470,param_5,param_6,param_4,1,uVar7,0,1,param_8);
        if (cVar1 == '\0') {
          cVar1 = FUN_140d2cb70(&DAT_141c53470,param_2,param_3,param_4,1,uVar7 & 0xffffff00,0,1,
                                param_8);
          if (cVar1 == '\0') goto LAB_1408f4760;
          cVar1 = FUN_140d89e40(param_1,param_2,param_3,param_7,1,param_8);
          goto joined_r0x0001408f472b;
        }
      }
      cVar1 = FUN_1400b79a0(param_1,param_5,param_6,param_7);
      if ((cVar1 != '\a') &&
         ((('\x06' < param_13 && ('\x06' < cVar1)) || ((param_8 >> 0xb & 1) == 0))))
      goto LAB_1408f4760;
    }
LAB_1408f45c8:
    bVar2 = true;
  }
  else {
LAB_1408f4760:
    bVar2 = false;
  }
  return bVar2;
}

