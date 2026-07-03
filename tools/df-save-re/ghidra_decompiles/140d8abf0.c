// FUN_140d8abf0 @ 140d8abf0
// callees:
//   -> 1400047c0 FUN_1400047c0
//   -> 14015b330 FUN_14015b330


void FUN_140d8abf0(undefined8 param_1,short param_2,short param_3,undefined8 param_4,short param_5,
                  undefined4 param_6,undefined2 param_7,undefined4 param_8,undefined1 param_9)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_5 != -1) {
    lVar1 = FUN_1400047c0();
    if (lVar1 != 0) {
      uVar3 = (int)param_3 & 0x8000000f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
      }
      uVar2 = (int)param_2 & 0x8000000f;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
      }
      FUN_14015b330(lVar1,uVar2 & 0xffff,uVar3 & 0xffff,param_5,param_6,param_7,param_8,param_9);
    }
  }
  return;
}

