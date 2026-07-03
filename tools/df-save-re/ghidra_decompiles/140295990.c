// FUN_140295990 @ 140295990
// callees:
//   -> 14028f570 FUN_14028f570
//   -> 14000b9d0 FUN_14000b9d0
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14014ae60 FUN_14014ae60
//   -> EXTERNAL:000000f7 qsort


void FUN_140295990(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar7;
  
  uVar7 = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
  }
  for (; ((int)param_2 < param_3 &&
         ((ulonglong)(longlong)(int)param_2 <
          (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3)));
      param_2 = param_2 + 1) {
    FUN_14028f570(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)param_2 * 8),
                  param_2 & 0xffff);
  }
  FUN_14000b9d0(param_1 + 8,*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3);
  uVar8 = uVar7;
  if (*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3 != 0) {
    do {
      *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar8 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar8 * 8);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar8 * 8);
      lVar1 = lVar4 + 0x20;
      lVar4 = lVar4 + 0x100;
      if (lVar4 != lVar1) {
        FUN_14000c8b0(lVar4,lVar1,0,0xffffffffffffffff);
      }
      FUN_14014ae60(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar8 * 8) + 0x100);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar8 = (longlong)(int)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3));
  }
  if ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) & 0xfffffffffffffff8U) != 0) {
    qsort(*(void **)(param_1 + 8),*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3,8,
          FUN_140295900);
    plVar2 = *(longlong **)(param_1 + 0x28);
    for (plVar3 = *(longlong **)(param_1 + 0x20); plVar3 < plVar2; plVar3 = plVar3 + 1) {
      lVar1 = *plVar3;
      puVar5 = (undefined8 *)(lVar1 + 0x100);
      *(undefined8 *)(lVar1 + 0x110) = 0;
      if (0xf < *(ulonglong *)(lVar1 + 0x118)) {
        puVar5 = (undefined8 *)*puVar5;
      }
      *(undefined1 *)puVar5 = 0;
    }
  }
  return;
}

