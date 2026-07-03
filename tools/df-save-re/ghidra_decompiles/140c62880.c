// FUN_140c62880 @ 140c62880
// callees:
//   -> 1408057f0 FUN_1408057f0


void FUN_140c62880(longlong param_1,undefined4 *param_2,char param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (param_3 != '\0') {
    *param_2 = 1;
    *(longlong *)(param_2 + 2) = param_1;
  }
  if ((*(uint *)(param_1 + 0x110) & 0x2000000) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x1c0);
    puVar1 = *(undefined8 **)(param_1 + 0x1c8);
    if (puVar4 < puVar1) {
      while ((iVar2 = (**(code **)(*(longlong *)*puVar4 + 0x10))(), iVar2 != 0xb ||
             (lVar3 = (**(code **)(*(longlong *)*puVar4 + 0x18))(), lVar3 == 0))) {
        puVar4 = puVar4 + 1;
        if (puVar1 <= puVar4) {
          return;
        }
      }
      FUN_1408057f0(lVar3,param_2,1);
    }
  }
  return;
}

