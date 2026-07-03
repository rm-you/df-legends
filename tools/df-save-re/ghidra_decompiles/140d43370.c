// FUN_140d43370 @ 140d43370
// callees:
//   -> 140d43470 FUN_140d43470


void FUN_140d43370(undefined8 param_1,short param_2,undefined8 param_3,ulonglong param_4,
                  undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  
  sVar6 = (short)param_3;
  FUN_140d43470(param_1,param_2,param_3,param_4,param_5,param_6);
  iVar1 = param_2 + 1;
  uVar5 = (int)param_2 - 1;
  if ((short)uVar5 <= iVar1) {
    do {
      uVar4 = (uint)(short)(sVar6 + -1);
      uVar2 = uVar4;
      while ((int)uVar2 <= sVar6 + 1) {
        if (((short)uVar5 != param_2) || ((short)uVar4 != sVar6)) {
          FUN_140d43470(param_1,uVar5 & 0xffff,uVar4 & 0xffff,param_4 & 0xffff,param_5,param_7);
        }
        uVar3 = (short)uVar4 + 1;
        uVar4 = (uint)uVar3;
        uVar2 = (uint)(short)uVar3;
      }
      uVar3 = (short)uVar5 + 1;
      uVar5 = (uint)uVar3;
    } while ((short)uVar3 <= iVar1);
  }
  return;
}

