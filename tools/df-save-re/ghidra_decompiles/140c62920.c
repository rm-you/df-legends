// FUN_140c62920 @ 140c62920
// callees:
//   -> 1408056a0 FUN_1408056a0


undefined8 FUN_140c62920(longlong param_1,int *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  *param_3 = 1;
  *(longlong *)(param_3 + 2) = param_1;
  if ((*(uint *)(param_1 + 0x110) & 0x2000000) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x1c8);
    for (puVar5 = *(undefined8 **)(param_1 + 0x1c0); puVar5 < puVar1; puVar5 = puVar5 + 1) {
      iVar2 = (**(code **)(*(longlong *)*puVar5 + 0x10))();
      if (iVar2 == 0xb) {
        lVar3 = (**(code **)(*(longlong *)*puVar5 + 0x18))();
        if (lVar3 != 0) {
          if ((*param_2 == 5) && (*(longlong *)(param_2 + 2) == lVar3)) {
            return 1;
          }
          uVar4 = FUN_1408056a0(lVar3,param_2,param_3);
          return uVar4;
        }
      }
    }
  }
  return 0;
}

