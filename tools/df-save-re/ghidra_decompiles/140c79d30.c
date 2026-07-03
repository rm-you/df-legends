// FUN_140c79d30 @ 140c79d30
// callees:
//   -> 140c7f720 FUN_140c7f720
//   -> 140c76f30 FUN_140c76f30
//   -> 140c21090 FUN_140c21090


void FUN_140c79d30(longlong param_1,undefined2 param_2,int param_3,undefined4 param_4,char param_5)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  ushort *puVar5;
  ulonglong uVar6;
  short sVar7;
  
  uVar6 = (ulonglong)param_3;
  FUN_140c7f720();
  FUN_140c76f30(param_1);
  if ((-1 < param_3) &&
     (uVar6 < (ulonglong)(*(longlong *)(param_1 + 0xc30) - *(longlong *)(param_1 + 0xc28) >> 3))) {
    sVar7 = *(short *)(param_1 + 0xa4);
    sVar1 = *(short *)(param_1 + 300);
    if ((-1 < sVar7) &&
       (((ulonglong)(longlong)sVar7 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) &&
        (-1 < sVar1)))) {
      lVar4 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar7 * 8);
      if (((ulonglong)(longlong)sVar1 <
           (ulonglong)(*(longlong *)(lVar4 + 0x180) - *(longlong *)(lVar4 + 0x178) >> 3)) &&
         (*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x178) + (longlong)sVar1 * 8) + 0x46c) ==
          -0x159f)) {
        sVar7 = *(short *)(*(longlong *)(param_1 + 0x12d0) + uVar6 * 2);
        if (param_5 == '\0') {
          sVar7 = sVar7 - *(short *)(*(longlong *)(param_1 + 0x12e8) + uVar6 * 2);
        }
        lVar4 = uVar6 * 8;
        puVar5 = *(ushort **)(lVar4 + *(longlong *)(param_1 + 0xc28));
        uVar2 = *puVar5;
        FUN_140c21090(puVar5,param_2,
                      *(undefined2 *)
                       (*(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar4) + 0xdc),sVar7,
                      param_4);
        uVar3 = *puVar5;
        if ((uVar3 != uVar2) && ((*(uint *)(param_1 + 0x118) >> 8 & 1) != 0)) {
          lVar4 = *(longlong *)(lVar4 + **(longlong **)(param_1 + 0x5d8));
          uVar2 = *(ushort *)(lVar4 + 0xda);
          if (((uVar2 <= uVar3) && (uVar2 != 0xea61)) ||
             ((uVar2 = *(ushort *)(lVar4 + 0xd8), uVar3 <= uVar2 && (uVar2 != 0xea61)))) {
            *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffeff;
          }
        }
      }
    }
  }
  return;
}

