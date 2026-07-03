// FUN_140c7f4a0 @ 140c7f4a0
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 140c81440 FUN_140c81440
//   -> 14000bc60 FUN_14000bc60
//   -> 14000c460 FUN_14000c460


void FUN_140c7f4a0(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  short *psVar3;
  short *psVar4;
  char cVar5;
  short sVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short local_res8 [4];
  
  if ((*(uint *)(param_1 + 0x114) & 0x1000000) == 0) {
    uVar8 = 0;
    *(undefined8 *)(param_1 + 0x1320) = *(undefined8 *)(param_1 + 0x1318);
    puVar1 = (ulonglong *)(param_1 + 0x1330);
    *(ulonglong *)(param_1 + 0x1338) = *puVar1;
    sVar10 = 0;
    uVar7 = uVar8;
    sVar11 = sVar10;
    if (*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2 != 0) {
      do {
        *(short *)(*(longlong *)(param_1 + 0x1300) + uVar8 * 2) = sVar11;
        if ((((sVar10 < 0) ||
             (lVar2 = **(longlong **)(param_1 + 0x5d8),
             (ulonglong)((*(longlong **)(param_1 + 0x5d8))[1] - lVar2 >> 3) <= uVar8)) ||
            (cVar5 = FUN_14000d840(*(longlong *)(lVar2 + uVar8 * 8) + 0x48,0xd), cVar5 == '\0')) &&
           (sVar9 = (short)uVar7,
           *(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3 != 0)) {
          do {
            sVar6 = FUN_140c81440(param_1,*(undefined8 *)
                                           (uVar7 * 8 + *(longlong *)(param_1 + 0x3f8)),sVar10);
            local_res8[0] = sVar6;
            if (0 < sVar6) {
              FUN_14000bc60(param_1 + 0x1318,
                            **(longlong **)(uVar7 * 8 + *(longlong *)(param_1 + 0x3f8)) + 0x1c);
              psVar3 = *(short **)(param_1 + 0x1338);
              if ((local_res8 < psVar3) && (psVar4 = (short *)*puVar1, psVar4 <= local_res8)) {
                if (psVar3 == *(short **)(param_1 + 0x1340)) {
                  FUN_14000c460(puVar1,1);
                }
                if (*(undefined2 **)(param_1 + 0x1338) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0x1338) =
                       *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar4 >> 1) * 2)
                  ;
                }
              }
              else {
                if (psVar3 == *(short **)(param_1 + 0x1340)) {
                  FUN_14000c460(puVar1,1);
                }
                if (*(short **)(param_1 + 0x1338) != (short *)0x0) {
                  **(short **)(param_1 + 0x1338) = sVar6;
                }
              }
              *(longlong *)(param_1 + 0x1338) = *(longlong *)(param_1 + 0x1338) + 2;
              sVar11 = sVar11 + 1;
            }
            sVar9 = sVar9 + 1;
            uVar7 = (ulonglong)sVar9;
          } while (uVar7 < (ulonglong)
                           (*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3));
          uVar7 = 0;
        }
        sVar10 = sVar10 + 1;
        uVar8 = (ulonglong)sVar10;
      } while (uVar8 < (ulonglong)
                       (*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2));
    }
    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) | 0x1000000;
  }
  return;
}

