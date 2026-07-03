// FUN_14049b380 @ 14049b380
// callees:
//   -> 14007b720 FUN_14007b720
//   -> 14000c460 FUN_14000c460


void FUN_14049b380(longlong param_1)

{
  ulonglong *puVar1;
  short sVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined2 local_res8 [4];
  
  puVar1 = (ulonglong *)(param_1 + 0x1c10);
  iVar6 = 0;
  *(ulonglong *)(param_1 + 0x1c18) = *puVar1;
  if (*(longlong *)(param_1 + 0x148) - *(longlong *)(param_1 + 0x140) >> 1 != 0) {
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)
               (DAT_141d6ddd0 + (longlong)*(short *)(lVar7 + *(longlong *)(param_1 + 0x140)) * 8);
      sVar2 = *(short *)(lVar3 + 0xca);
      if (sVar2 == -1) {
        sVar2 = *(short *)(lVar3 + 200);
      }
      FUN_14007b720(sVar2,puVar1);
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 2;
    } while ((ulonglong)(longlong)iVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0x148) - *(longlong *)(param_1 + 0x140) >> 1));
  }
  if ((*(longlong *)(param_1 + 0x1c18) - *puVar1 & 0xfffffffffffffffe) == 0) {
    puVar4 = *(undefined2 **)(param_1 + 0x1c18);
    local_res8[0] = 0x65;
    if ((local_res8 < puVar4) && (puVar5 = (undefined2 *)*puVar1, puVar5 <= local_res8)) {
      if (puVar4 == *(undefined2 **)(param_1 + 0x1c20)) {
        FUN_14000c460(puVar1,1);
      }
      if (*(undefined2 **)(param_1 + 0x1c18) != (undefined2 *)0x0) {
        **(undefined2 **)(param_1 + 0x1c18) =
             *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)puVar5 >> 1) * 2);
        *(longlong *)(param_1 + 0x1c18) = *(longlong *)(param_1 + 0x1c18) + 2;
        return;
      }
    }
    else {
      if (puVar4 == *(undefined2 **)(param_1 + 0x1c20)) {
        FUN_14000c460(puVar1,1);
      }
      if (*(undefined2 **)(param_1 + 0x1c18) != (undefined2 *)0x0) {
        **(undefined2 **)(param_1 + 0x1c18) = 0x65;
      }
    }
    *(longlong *)(param_1 + 0x1c18) = *(longlong *)(param_1 + 0x1c18) + 2;
  }
  return;
}

