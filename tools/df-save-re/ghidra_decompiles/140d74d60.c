// FUN_140d74d60 @ 140d74d60
// callees:
//   -> 140019bb0 FUN_140019bb0
//   -> 140150660 FUN_140150660
//   -> 14000d840 FUN_14000d840
//   -> 1409fc0c0 FUN_1409fc0c0


uint FUN_140d74d60(longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  short local_res8 [4];
  short local_28 [8];
  
  FUN_140019bb0(param_1,local_28,local_res8,param_2,param_3,param_4);
  lVar5 = FUN_140150660(*(undefined8 *)(param_1 + 0x119b60),(int)local_28[0],(int)local_res8[0]);
  uVar4 = 0;
  if ((lVar5 != 0) && (iVar8 = 0, *(longlong *)(lVar5 + 0x10) - *(longlong *)(lVar5 + 8) >> 3 != 0))
  {
    plVar2 = *(longlong **)(lVar5 + 8);
    plVar6 = plVar2;
    do {
      iVar1 = *(int *)(*plVar6 + 4);
      if (((iVar1 < 0) ||
          ((ulonglong)(*(longlong *)(param_1 + 0x11a778) - *(longlong *)(param_1 + 0x11a770) >> 3)
           <= (ulonglong)(longlong)iVar1)) ||
         (cVar3 = FUN_14000d840(*(longlong *)
                                 (*(longlong *)(param_1 + 0x11a770) + (longlong)iVar1 * 8) + 0x38,
                                0xb), cVar3 == '\0')) {
        return *(uint *)(plVar2[iVar8] + 4);
      }
      iVar8 = iVar8 + 1;
      plVar6 = plVar6 + 1;
    } while ((ulonglong)(longlong)iVar8 <
             (ulonglong)(*(longlong *)(lVar5 + 0x10) - (longlong)plVar2 >> 3));
  }
  uVar7 = *(longlong *)(param_1 + 0x11a778) - *(longlong *)(param_1 + 0x11a770) >> 3;
  if (1 < (uint)uVar7) {
    uVar4 = FUN_1409fc0c0();
    uVar4 = (uVar4 + (int)((longlong)((ulonglong)uVar4 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            ((int)(0x7fffffff / (uVar7 & 0xffffffff)) + 1U);
  }
  return uVar4;
}

