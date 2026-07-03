// FUN_140d869c0 @ 140d869c0
// callees:
//   -> 1400048f0 FUN_1400048f0


void FUN_140d869c0(longlong param_1,short param_2,short param_3,undefined2 param_4)

{
  ulonglong uVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  
  sVar2 = param_2 + -2;
  if ((int)sVar2 <= param_2 + 2) {
    do {
      uVar4 = (uint)(short)(param_3 + -2);
      uVar5 = uVar4;
      while (sVar3 = (short)uVar5, (int)uVar4 <= param_3 + 2) {
        uVar1 = FUN_1400048f0(param_1,sVar2,uVar5,param_4);
        if ((uVar1 & 7) != 0) {
          *(undefined1 *)(param_1 + 0x1d201) = 1;
          return;
        }
        uVar5 = (uint)(ushort)(sVar3 + 1U);
        uVar4 = (uint)(short)(sVar3 + 1U);
      }
      sVar2 = sVar2 + 1;
    } while ((int)sVar2 <= param_2 + 2);
  }
  return;
}

