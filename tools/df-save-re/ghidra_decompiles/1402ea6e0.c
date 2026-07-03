// FUN_1402ea6e0 @ 1402ea6e0
// callees:
//   -> 1402d80b0 FUN_1402d80b0
//   -> 1402cd610 FUN_1402cd610
//   -> 140286c80 FUN_140286c80
//   -> 140071310 FUN_140071310
//   -> 1402e9e70 FUN_1402e9e70


void FUN_1402ea6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,short *param_6,undefined2 *param_7,short *param_8,int *param_9,
                  undefined2 param_10,undefined8 param_11)

{
  longlong lVar1;
  undefined8 *puVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  
  sVar3 = FUN_1402d80b0(param_1,param_11);
  *param_6 = sVar3;
  lVar6 = FUN_1402cd610(&DAT_141d6ddb8,param_2);
  uVar4 = 0xffff;
  if (lVar6 != 0) {
    uVar4 = *(undefined2 *)(lVar6 + 0x28);
  }
  *param_7 = uVar4;
  *param_8 = -1;
  *param_9 = -1;
  uVar9 = 0;
  switch(*param_6) {
  case 0x17:
  case 0x2d:
  case 0x47:
    *param_6 = -1;
    *param_7 = 0xffff;
    break;
  default:
    FUN_1402e9e70(param_8,param_9,param_10,param_3,param_4,param_5,param_11);
    break;
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x57:
    sVar3 = FUN_140286c80(&DAT_141d6dd30,param_3);
    *param_8 = sVar3;
    if ((((*(longlong *)(param_4 + 0x10) != 0) && (-1 < sVar3)) &&
        ((ulonglong)(longlong)sVar3 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
       ((lVar6 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar3 * 8), lVar6 != 0 &&
        (sVar3 = 0, *(longlong *)(lVar6 + 0x180) - *(longlong *)(lVar6 + 0x178) >> 3 != 0)))) {
      lVar1 = *(longlong *)(lVar6 + 0x178);
      uVar7 = uVar9;
      do {
        iVar5 = FUN_140071310(*(undefined8 *)(lVar1 + uVar7 * 8),param_4);
        if (iVar5 == 0) {
          *param_9 = (int)sVar3;
          break;
        }
        sVar3 = sVar3 + 1;
        uVar7 = (ulonglong)sVar3;
      } while (uVar7 < (ulonglong)(*(longlong *)(lVar6 + 0x180) - lVar1 >> 3));
    }
  }
  if (((*param_6 == 0x37) && (*param_7 = 0xffff, (ushort)(*param_8 - 0x1a3U) < 200)) &&
     ((iVar5 = *param_9, -1 < iVar5 &&
      (((ulonglong)(longlong)iVar5 < (ulonglong)(DAT_141d6dc18 - DAT_141d6dc10 >> 3) &&
       (lVar6 = *(longlong *)(DAT_141d6dc10 + (longlong)iVar5 * 8), lVar6 != 0)))))) {
    puVar2 = *(undefined8 **)(lVar6 + 0x610);
    for (puVar8 = *(undefined8 **)(lVar6 + 0x608); puVar8 < puVar2; puVar8 = puVar8 + 1) {
      iVar5 = FUN_140071310(*puVar8,param_2);
      if (iVar5 == 0) {
        *param_7 = (short)uVar9;
        return;
      }
      uVar9 = (ulonglong)((int)uVar9 + 1);
    }
  }
  return;
}

