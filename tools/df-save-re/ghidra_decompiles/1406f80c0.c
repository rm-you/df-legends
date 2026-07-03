// FUN_1406f80c0 @ 1406f80c0
// callees:


ulonglong FUN_1406f80c0(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  if (((int)param_1[7] == -1) && (in_RAX = param_1[1] - *param_1 >> 2, in_RAX == 0)) {
    uVar1 = param_1[6];
    uVar3 = 0;
    puVar4 = (uint *)param_1[3];
    uVar5 = 0;
    in_RAX = 0;
    puVar6 = puVar4;
    if (uVar1 != 0) {
      if (((longlong)uVar1 < 0) && (uVar1 != 0)) {
        in_RAX = (-uVar1 - 1 >> 5) * -4 - 4;
        uVar5 = in_RAX;
      }
      else {
        in_RAX = uVar1 >> 5;
        uVar5 = in_RAX * 4;
      }
      puVar6 = (uint *)((longlong)puVar4 + uVar5);
      uVar5 = (ulonglong)((uint)uVar1 & 0x1f);
    }
    while( true ) {
      if ((puVar6 <= puVar4) && ((puVar4 != puVar6 || (uVar5 <= uVar3)))) {
        return CONCAT71((int7)(in_RAX >> 8),(int)param_1[8] == 0);
      }
      uVar2 = 1 << ((byte)uVar3 & 0x1f);
      in_RAX = (ulonglong)uVar2;
      if ((*puVar4 & uVar2) != 0) break;
      if (uVar3 < 0x1f) {
        uVar3 = uVar3 + 1;
      }
      else {
        uVar3 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

