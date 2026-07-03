// FUN_140cec360 @ 140cec360
// callees:
//   -> 140cec410 FUN_140cec410
//   -> 140cec360 FUN_140cec360


void FUN_140cec360(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  uVar5 = 0;
  uVar3 = (*(longlong *)(param_2 + 0x40) - (longlong)puVar4) + 7U >> 3;
  if (*(undefined8 **)(param_2 + 0x40) < puVar4) {
    uVar3 = uVar5;
  }
  if (uVar3 != 0) {
    do {
      iVar1 = (**(code **)(*(longlong *)*puVar4 + 0x10))();
      if ((iVar1 == 10) && (lVar2 = (**(code **)(*(longlong *)*puVar4 + 0x18))(), lVar2 != 0)) {
        if ((*(uint *)(lVar2 + 0x10) & 0x40000) != 0) {
          FUN_140cec410(param_1,lVar2);
        }
        if ((*(byte *)(lVar2 + 0x14) & 0x20) != 0) {
          FUN_140cec360(param_1,lVar2);
        }
      }
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return;
}

