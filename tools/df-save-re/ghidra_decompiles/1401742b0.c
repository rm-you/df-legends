// FUN_1401742b0 @ 1401742b0
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_1401742b0(longlong param_1)

{
  void *_Src;
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xc0) >> 3 != 0) {
    lVar9 = 0;
    do {
      lVar6 = *(longlong *)(lVar9 + *(longlong *)(param_1 + 0xc0));
      iVar8 = (int)(*(longlong *)(lVar6 + 0xb0) - *(longlong *)(lVar6 + 0xa8) >> 3) + -1;
      if (-1 < iVar8) {
        lVar6 = (longlong)iVar8 * 8;
        lVar7 = lVar6;
        do {
          lVar4 = *(longlong *)(lVar9 + *(longlong *)(param_1 + 0xc0));
          if (*(longlong *)(lVar6 + *(longlong *)(lVar4 + 0xa8)) == param_1) {
            _Dst = (void *)(*(longlong *)(lVar4 + 0xa8) + lVar7);
            _Src = (void *)((longlong)_Dst + 8);
            memmove(_Dst,_Src,*(longlong *)(lVar4 + 0xb0) - (longlong)_Src);
            *(longlong *)(lVar4 + 0xb0) = *(longlong *)(lVar4 + 0xb0) + -8;
            if ((DAT_141c347ac != '\0') &&
               (iVar2 = (int)(DAT_141c36aa8 - DAT_141c36aa0 >> 3) + -1, lVar4 = (longlong)iVar2,
               -1 < iVar2)) {
              do {
                plVar1 = *(longlong **)(DAT_141c36aa0 + lVar4 * 8);
                for (plVar3 = (longlong *)*plVar1; plVar3 < (longlong *)plVar1[1];
                    plVar3 = plVar3 + 1) {
                  if (*plVar3 == *(longlong *)(lVar9 + *(longlong *)(param_1 + 0xc0))) {
                    if (((int)((longlong)plVar3 - *plVar1 >> 3) != -1) &&
                       (((*(undefined4 *)(plVar1 + 3) = 0, DAT_141c34170 < 1 ||
                         ((*DAT_141c34168 & 8) == 0)) &&
                        (iVar2 = (int)(plVar1[1] - *plVar1 >> 3) + -1, lVar5 = (longlong)iVar2,
                        -1 < iVar2)))) {
                      do {
                        plVar3 = *(longlong **)(*plVar1 + lVar5 * 8);
                        iVar2 = (**(code **)(*plVar3 + 0x158))(plVar3,0);
                        *(int *)(plVar1 + 3) = (int)plVar1[3] + iVar2;
                        lVar5 = lVar5 + -1;
                      } while (-1 < lVar5);
                    }
                    break;
                  }
                }
                lVar4 = lVar4 + -1;
              } while (-1 < lVar4);
            }
          }
          lVar7 = lVar7 + -8;
          lVar6 = lVar6 + -8;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
      local_res8 = local_res8 + 1;
      lVar9 = lVar9 + 8;
    } while ((ulonglong)(longlong)local_res8 <
             (ulonglong)(*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xc0) >> 3));
  }
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xc0);
  DAT_141c3cc78 = DAT_141c3cc78 | 0x1000;
  return;
}

