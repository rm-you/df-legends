// FUN_140d74c30 @ 140d74c30
// callees:
//   -> 140019bb0 FUN_140019bb0
//   -> 140150660 FUN_140150660
//   -> 14000d840 FUN_14000d840
//   -> 1409fc0c0 FUN_1409fc0c0


ulonglong FUN_140d74c30(longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  short local_res8 [4];
  short local_18 [8];
  
  FUN_140019bb0(param_1,local_18,local_res8,param_2,param_3,param_4);
  lVar4 = FUN_140150660(*(undefined8 *)(param_1 + 0x119b60),(int)local_18[0],(int)local_res8[0]);
  if ((lVar4 != 0) &&
     (iVar8 = (int)(*(longlong *)(lVar4 + 0x10) - *(longlong *)(lVar4 + 8) >> 3) + -1, -1 < iVar8))
  {
    lVar4 = *(longlong *)(lVar4 + 8);
    lVar5 = (longlong)iVar8;
    plVar7 = (longlong *)(lVar4 + lVar5 * 8);
    do {
      iVar1 = *(int *)(*plVar7 + 4);
      if (((-1 < iVar1) &&
          ((ulonglong)(longlong)iVar1 <
           (ulonglong)(*(longlong *)(param_1 + 0x11a778) - *(longlong *)(param_1 + 0x11a770) >> 3)))
         && (cVar2 = FUN_14000d840(*(longlong *)
                                    (*(longlong *)(param_1 + 0x11a770) + (longlong)iVar1 * 8) + 0x38
                                   ,0xb), cVar2 != '\0')) {
        return (ulonglong)*(uint *)(*(longlong *)(lVar4 + (longlong)iVar8 * 8) + 4);
      }
      iVar8 = iVar8 + -1;
      plVar7 = plVar7 + -1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  uVar6 = *(longlong *)(param_1 + 0x11a778) - *(longlong *)(param_1 + 0x11a770) >> 3;
  if ((uint)uVar6 < 2) {
    uVar6 = 0;
  }
  else {
    uVar3 = FUN_1409fc0c0();
    uVar6 = (ulonglong)
            (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            (ulonglong)((int)(0x7fffffff / (uVar6 & 0xffffffff)) + 1);
  }
  return uVar6;
}

