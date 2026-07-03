// FUN_140363aa0 @ 140363aa0
// callees:
//   -> 140071310 FUN_140071310
//   -> 14000c460 FUN_14000c460
//   -> 140051e20 FUN_140051e20


void FUN_140363aa0(longlong param_1)

{
  undefined8 uVar1;
  short *psVar2;
  short *psVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  longlong lVar8;
  short local_res8 [4];
  
  lVar8 = 0;
  iVar5 = (int)(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 3);
  if (0 < iVar5) {
    do {
      lVar4 = DAT_141d778b0;
      sVar7 = (short)(DAT_141d778b8 - DAT_141d778b0 >> 3);
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar8 * 8);
      do {
        sVar7 = sVar7 + -1;
        if (sVar7 < 0) {
          sVar7 = -1;
          break;
        }
        iVar6 = FUN_140071310(*(undefined8 *)(lVar4 + (longlong)sVar7 * 8),uVar1);
      } while (iVar6 != 0);
      local_res8[0] = sVar7;
      if (sVar7 != -1) {
        psVar2 = *(short **)(param_1 + 0x28);
        if ((local_res8 < psVar2) && (psVar3 = *(short **)(param_1 + 0x20), psVar3 <= local_res8)) {
          if (psVar2 == *(short **)(param_1 + 0x30)) {
            FUN_14000c460(param_1 + 0x20,1);
          }
          if (*(undefined2 **)(param_1 + 0x28) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x28) =
                 *(undefined2 *)
                  (*(longlong *)(param_1 + 0x20) +
                  ((longlong)local_res8 - (longlong)psVar3 >> 1) * 2);
          }
        }
        else {
          if (psVar2 == *(short **)(param_1 + 0x30)) {
            FUN_14000c460(param_1 + 0x20,1);
          }
          if (*(short **)(param_1 + 0x28) != (short *)0x0) {
            **(short **)(param_1 + 0x28) = sVar7;
          }
        }
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 2;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar5);
  }
  FUN_140051e20(param_1 + 0x40);
  return;
}

