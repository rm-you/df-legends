// FUN_140df7be0 @ 140df7be0
// callees:
//   -> 140dfb450 FUN_140dfb450
//   -> 140dfb460 FUN_140dfb460
//   -> 140df7b60 FUN_140df7b60


int FUN_140df7be0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return -2;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(code **)(param_1 + 0x30) = FUN_140dfb450;
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    *(code **)(param_1 + 0x38) = FUN_140dfb460;
  }
  lVar3 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),1,0x1be8);
  if (lVar3 == 0) {
    iVar2 = -4;
  }
  else {
    *(longlong *)(param_1 + 0x28) = lVar3;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (lVar1 == 0) {
      iVar2 = -2;
    }
    else {
      if ((*(longlong *)(lVar1 + 0x38) != 0) && (*(int *)(lVar1 + 0x28) != 0xf)) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
        *(undefined8 *)(lVar1 + 0x38) = 0;
      }
      *(undefined4 *)(lVar1 + 8) = 1;
      *(undefined4 *)(lVar1 + 0x28) = 0xf;
      iVar2 = FUN_140df7b60(param_1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),lVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return iVar2;
}

