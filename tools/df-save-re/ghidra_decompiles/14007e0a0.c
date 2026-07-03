// FUN_14007e0a0 @ 14007e0a0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140071810 FUN_140071810


int * FUN_14007e0a0(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if (*(longlong *)(param_1 + 0x130) == 0) {
    puVar3 = operator_new(0x68);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    *(undefined8 **)(param_1 + 0x130) = puVar3;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x58) == 0) {
    puVar3 = operator_new(0x60);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    *(undefined4 *)(puVar3 + 6) = 0xffffffff;
    *(undefined4 *)(puVar3 + 10) = 0;
    puVar3[0xb] = 0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x130) + 0x58) = puVar3;
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x58);
  iVar6 = (int)(plVar2[1] - *plVar2 >> 3) + -1;
  if (-1 < iVar6) {
    do {
      iVar5 = iVar6 + iVar7 >> 1;
      piVar4 = *(int **)(*plVar2 + (longlong)iVar5 * 8);
      iVar1 = *piVar4;
      if (iVar1 == param_2) {
        return piVar4;
      }
      if (param_2 < iVar1) {
        iVar6 = iVar5 + -1;
      }
      else {
        iVar7 = iVar5 + 1;
      }
    } while (iVar7 <= iVar6);
  }
  piVar4 = operator_new(0x58);
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[4] = 0;
  piVar4[5] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  piVar4[8] = 0;
  piVar4[9] = 0;
  piVar4[10] = 0;
  piVar4[0xb] = 0;
  piVar4[0xc] = 0;
  piVar4[0xd] = 0;
  piVar4[0xe] = -1;
  piVar4[0xf] = -1;
  piVar4[0x10] = 0;
  piVar4[0x12] = 0;
  piVar4[0x13] = -1;
  *piVar4 = param_2;
  FUN_140071810(piVar4,plVar2);
  return piVar4;
}

