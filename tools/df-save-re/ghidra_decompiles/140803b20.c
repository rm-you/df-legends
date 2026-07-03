// FUN_140803b20 @ 140803b20
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 140c467f0 FUN_140c467f0
//   -> 1406d1d50 FUN_1406d1d50
//   -> 140d7cb10 FUN_140d7cb10
//   -> 140004650 FUN_140004650


bool FUN_140803b20(longlong *param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ushort local_res8 [8];
  short local_res18 [4];
  longlong local_res20;
  undefined1 local_38 [16];
  
  uVar3 = (**(code **)*param_1)();
  switch(uVar3) {
  case 0x17:
  case 0x2d:
    (**(code **)(*param_1 + 0x1f8))(param_1,local_res8,local_res18,local_38,&local_res20);
    lVar8 = DAT_141d6dd50;
    if (local_res20 == 0) {
      if (-1 < (short)local_res8[0]) {
        uVar10 = DAT_141d6dd58 - DAT_141d6dd50 >> 3;
        uVar9 = (ulonglong)(short)local_res8[0];
        if (uVar10 <= uVar9) {
          return true;
        }
        if (-1 < local_res18[0]) {
          lVar1 = *(longlong *)(DAT_141d6dd50 + uVar9 * 8);
          if ((((ulonglong)(longlong)local_res18[0] <
                (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) &&
              (cVar2 = FUN_14000d840(*(longlong *)
                                      (*(longlong *)(lVar1 + 0x178) + (longlong)local_res18[0] * 8)
                                     + 0x6a8,0x17), cVar2 != '\0')) && (param_2 < '\x03')) {
            return false;
          }
        }
        if ((uVar9 < uVar10) && (-1 < local_res18[0])) {
          lVar8 = *(longlong *)(lVar8 + uVar9 * 8);
          if (((ulonglong)(longlong)local_res18[0] <
               (ulonglong)(*(longlong *)(lVar8 + 0x180) - *(longlong *)(lVar8 + 0x178) >> 3)) &&
             ((cVar2 = FUN_14000d840(*(longlong *)
                                      (*(longlong *)(lVar8 + 0x178) + (longlong)local_res18[0] * 8)
                                     + 0x6a8,0x16), cVar2 != '\0' && (param_2 < '\x02')))) {
            return false;
          }
        }
      }
      return true;
    }
    cVar2 = FUN_140c467f0(local_res20);
    if ((cVar2 == '\x02') && (param_2 < '\x03')) {
      return false;
    }
    cVar2 = FUN_140c467f0(local_res20);
    break;
  default:
    uVar3 = (**(code **)*param_1)(param_1);
    cVar2 = FUN_1406d1d50(uVar3);
    if (cVar2 == '\0') {
      return false;
    }
    sVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ushort)(sVar5 - 0x1a3U) < 200) {
      if (param_2 == '\0') {
        uVar3 = 11000;
        iVar6 = (**(code **)(*param_1 + 0x18))(param_1);
        goto LAB_140803e2f;
      }
    }
    else {
      if (199 < (ushort)(sVar5 - 0x13U)) {
        if (199 < (ushort)(sVar5 - 0xdbU)) {
          uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
          switch(uVar3) {
          case 0:
          case 7:
          case 8:
          case 9:
          case 10:
            return param_2 == '\x02';
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 0xc:
            return '\0' < param_2;
          case 6:
          case 0xb:
          case 0xd:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x12:
            goto switchD_140803b62_caseD_40;
          default:
            return false;
          }
        }
        uVar7 = (**(code **)(*param_1 + 0x18))();
        lVar8 = FUN_140004650(&DAT_141d7a048,uVar7);
        if (lVar8 == 0) {
          return false;
        }
        sVar5 = sVar5 + -200;
        if (param_2 == '\0') {
          iVar6 = (int)*(short *)(lVar8 + 2);
          uVar3 = 11000;
        }
        else if (param_2 == '\x01') {
          iVar6 = (int)*(short *)(lVar8 + 2);
          uVar3 = 12000;
        }
        else {
          if (param_2 != '\x02') {
            return false;
          }
          iVar6 = (int)*(short *)(lVar8 + 2);
          uVar3 = 50000;
        }
        goto LAB_140803e2f;
      }
      if (param_2 == '\0') {
        uVar3 = 11000;
        iVar6 = (**(code **)(*param_1 + 0x18))(param_1);
        goto LAB_140803e2f;
      }
    }
    if (param_2 == '\x01') {
      uVar3 = 12000;
      iVar6 = (**(code **)(*param_1 + 0x18))(param_1);
    }
    else {
      if (param_2 != '\x02') {
        return false;
      }
      uVar3 = 50000;
      iVar6 = (**(code **)(*param_1 + 0x18))(param_1);
    }
LAB_140803e2f:
    cVar2 = FUN_140d7cb10(&DAT_141c53470,sVar5,iVar6,uVar3);
    return cVar2 == '\0';
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x57:
    sVar5 = (**(code **)(*param_1 + 0x18))(param_1);
    sVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    if (((-1 < sVar4) &&
        ((ulonglong)(longlong)sVar4 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
       (-1 < sVar5)) {
      lVar8 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar4 * 8);
      if ((((ulonglong)(longlong)sVar5 <
            (ulonglong)(*(longlong *)(lVar8 + 0x180) - *(longlong *)(lVar8 + 0x178) >> 3)) &&
          (cVar2 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar8 + 0x178) + (longlong)sVar5 * 8) +
                                 0x6a8,0x17), cVar2 != '\0')) && (param_2 == '\x02')) {
        return false;
      }
    }
    sVar5 = (**(code **)(*param_1 + 0x18))(param_1);
    sVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    if (sVar4 < 0) {
      return true;
    }
    if ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar4) {
      return true;
    }
    if (sVar5 < 0) {
      return true;
    }
    lVar8 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar4 * 8);
    if ((ulonglong)(*(longlong *)(lVar8 + 0x180) - *(longlong *)(lVar8 + 0x178) >> 3) <=
        (ulonglong)(longlong)sVar5) {
      return true;
    }
    cVar2 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar8 + 0x178) + (longlong)sVar5 * 8) + 0x6a8,
                          0x16);
    break;
  case 0x40:
  case 0x47:
    goto switchD_140803b62_caseD_40;
  }
  if ((cVar2 != '\0') && (param_2 < '\x02')) {
    return false;
  }
switchD_140803b62_caseD_40:
  return true;
}

