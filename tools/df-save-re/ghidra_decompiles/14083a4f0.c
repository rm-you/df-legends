// FUN_14083a4f0 @ 14083a4f0
// callees:
//   -> 14083a4f0 FUN_14083a4f0
//   -> 140df19a0 FUN_140df19a0


void FUN_14083a4f0(longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) + -1;
  lVar6 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar6 * 8) + 0x10))();
      if ((iVar2 == 10) &&
         (lVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar6 * 8) + 0x18))()
         , lVar3 != 0)) {
        if ((*(uint *)(lVar3 + 0x10) & 0x40000) != 0) {
          puVar1 = *(undefined8 **)(lVar3 + 0x40);
          for (puVar5 = *(undefined8 **)(lVar3 + 0x38); puVar5 < puVar1; puVar5 = puVar5 + 1) {
            iVar2 = (**(code **)(*(longlong *)*puVar5 + 0x10))();
            if (iVar2 == 1) {
              lVar4 = (**(code **)(*(longlong *)*puVar5 + 0x40))();
              if (lVar4 != 0) {
                FUN_140df19a0();
              }
              break;
            }
          }
        }
        if ((*(byte *)(lVar3 + 0x14) & 0x20) != 0) {
          FUN_14083a4f0(lVar3,param_2,param_3,param_4);
        }
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  return;
}

