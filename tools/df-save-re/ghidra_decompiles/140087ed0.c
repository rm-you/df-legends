// FUN_140087ed0 @ 140087ed0
// callees:
//   -> 140b894f0 FUN_140b894f0


undefined2 FUN_140087ed0(longlong param_1,short param_2,short param_3,short param_4)

{
  longlong lVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x132fa4) != '\0') {
    FUN_140b894f0();
  }
  if (((((param_2 < 0) || (*(int *)(param_1 + 0x1160e4) <= (int)param_2)) || (param_3 < 0)) ||
      ((*(int *)(param_1 + 0x1160e8) <= (int)param_3 || (param_4 < 0)))) ||
     ((*(int *)(param_1 + 0x1160ec) <= (int)param_4 ||
      ((*(longlong *)(param_1 + 0x1160b0) == 0 ||
       (lVar1 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8)
                   + ((longlong)param_3 >> 4) * 8) + (longlong)param_4 * 8), lVar1 == 0)))))) {
    uVar2 = 0;
  }
  else {
    uVar4 = (int)param_2 & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    uVar3 = (int)param_3 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    uVar2 = *(undefined2 *)
             (lVar1 + 0x1194 + ((longlong)(int)uVar4 * 0x10 + (longlong)(int)uVar3) * 2);
  }
  return uVar2;
}

