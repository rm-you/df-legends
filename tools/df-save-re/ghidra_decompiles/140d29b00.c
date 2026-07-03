// FUN_140d29b00 @ 140d29b00
// callees:
//   -> 140087ed0 FUN_140087ed0
//   -> 140d8c630 FUN_140d8c630


void FUN_140d29b00(longlong param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  *(undefined2 *)(param_1 + 0x26b7ee) = 1;
  sVar5 = 0;
  sVar3 = sVar5;
  if (0 < *(int *)(param_1 + 0x1160e4)) {
    do {
      sVar4 = sVar5;
      if (0 < *(int *)(param_1 + 0x1160e8)) {
        do {
          sVar2 = sVar5;
          if (0 < *(int *)(param_1 + 0x1160ec)) {
            do {
              sVar1 = FUN_140087ed0(param_1,sVar3,sVar4,sVar2);
              if (*(short *)(param_1 + 0x26b7ee) <= sVar1) {
                sVar1 = FUN_140087ed0(param_1,sVar3,sVar4,sVar2);
                *(short *)(param_1 + 0x26b7ee) = sVar1 + 1;
              }
              sVar2 = sVar2 + 1;
            } while ((int)sVar2 < *(int *)(param_1 + 0x1160ec));
          }
          sVar4 = sVar4 + 1;
        } while ((int)sVar4 < *(int *)(param_1 + 0x1160e8));
      }
      sVar3 = sVar3 + 1;
    } while ((int)sVar3 < *(int *)(param_1 + 0x1160e4));
  }
  FUN_140d8c630(param_1,0,*(short *)(param_1 + 0x1160d8) + -1,0,*(short *)(param_1 + 0x1160dc) + -1)
  ;
  return;
}

