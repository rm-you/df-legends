// FUN_14083a740 @ 14083a740
// callees:
//   -> 14083a740 FUN_14083a740
//   -> EXTERNAL:000000e1 memmove


void FUN_14083a740(longlong param_1,int param_2)

{
  void *_Src;
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Dst;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong local_res20;
  
  iVar7 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) + -1;
  if (-1 < iVar7) {
    lVar8 = (longlong)iVar7 * 8;
    local_res20 = lVar8;
    do {
      plVar1 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 0x38));
      iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
      if ((iVar3 == 10) && (lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1), lVar4 != 0)) {
        if ((*(uint *)(lVar4 + 0x10) & 0x40000) != 0) {
          puVar2 = *(undefined8 **)(lVar4 + 0x40);
          for (puVar6 = *(undefined8 **)(lVar4 + 0x38); puVar6 < puVar2; puVar6 = puVar6 + 1) {
            iVar3 = (**(code **)(*(longlong *)*puVar6 + 0x10))();
            if (iVar3 == 1) {
              lVar5 = (**(code **)(*(longlong *)*puVar6 + 0x40))();
              if ((lVar5 != 0) && ((*(int *)(lVar5 + 0xbc) != param_2 || (param_2 == -1)))) {
                plVar1 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 0x38));
                if (plVar1 != (longlong *)0x0) {
                  (**(code **)(*plVar1 + 0x78))(plVar1,1);
                }
                _Dst = (void *)(local_res20 + *(longlong *)(param_1 + 0x38));
                _Src = (void *)((longlong)_Dst + 8);
                memmove(_Dst,_Src,*(longlong *)(param_1 + 0x40) - (longlong)_Src);
                *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -8;
              }
              break;
            }
          }
        }
        if ((*(byte *)(lVar4 + 0x14) & 0x20) != 0) {
          FUN_14083a740(lVar4,param_2);
        }
      }
      local_res20 = local_res20 + -8;
      lVar8 = lVar8 + -8;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  return;
}

