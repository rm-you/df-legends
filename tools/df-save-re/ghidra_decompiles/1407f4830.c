// FUN_1407f4830 @ 1407f4830
// callees:
//   -> 1400b3c20 FUN_1400b3c20
//   -> 1400b3970 FUN_1400b3970


void FUN_1407f4830(longlong *param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 != '\0') {
    FUN_1400b3c20(param_1,&DAT_141c67380);
  }
  if ((*(uint *)(param_1 + 2) & 0x40000) != 0) {
    FUN_1400b3c20(param_1,&DAT_141c67398);
  }
  if ((*(uint *)(param_1 + 2) & 0x800) != 0) {
    FUN_1400b3c20(param_1,&DAT_141c67ab8);
  }
  if ((*(uint *)(param_1 + 2) & 0x400) != 0) {
    FUN_1400b3c20(param_1,&DAT_141c67ad0);
  }
  if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
    FUN_1400b3c20(param_1,&DAT_141c676c8);
  }
  cVar2 = (**(code **)(*param_1 + 0x328))(param_1,0);
  if (cVar2 != '\0') {
    FUN_1400b3c20(param_1,&DAT_141c675f0);
  }
  cVar2 = (**(code **)(*param_1 + 0x338))(param_1);
  if (cVar2 != '\0') {
    FUN_1400b3c20(param_1,&DAT_141c67608);
  }
  sVar3 = (**(code **)*param_1)(param_1);
  if (sVar3 != 0x34) {
    cVar2 = (**(code **)(*param_1 + 0x2f8))(param_1,0xffffffff);
    if (cVar2 != '\0') {
      FUN_1400b3c20(param_1,&DAT_141c67620);
    }
    cVar2 = (**(code **)(*param_1 + 0x300))(param_1,0xffffffff);
    if (cVar2 != '\0') {
      FUN_1400b3c20(param_1,&DAT_141c67638);
    }
    cVar2 = (**(code **)(*param_1 + 0x308))(param_1,0xffffffff);
    if (cVar2 != '\0') {
      FUN_1400b3c20(param_1,&DAT_141c67650);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x648))(param_1);
  if (cVar2 != '\0') {
    FUN_1400b3c20(param_1,&DAT_141c67668);
    FUN_1400b3c20(param_1,&DAT_141c67680);
  }
  iVar4 = (**(code **)(*param_1 + 0xa8))(param_1);
  if (iVar4 != -1) {
    iVar7 = 0;
    iVar6 = (int)(DAT_141d69210 - DAT_141d69208 >> 3) + -1;
    if (-1 < iVar6) {
      while( true ) {
        iVar5 = iVar6 + iVar7 >> 1;
        piVar1 = *(int **)(DAT_141d69208 + (longlong)iVar5 * 8);
        if (*piVar1 == iVar4) break;
        if (iVar4 < *piVar1) {
          iVar6 = iVar5 + -1;
        }
        else {
          iVar7 = iVar5 + 1;
        }
        if (iVar6 < iVar7) {
          return;
        }
      }
      if (piVar1 != (int *)0x0) {
        FUN_1400b3970(piVar1,&DAT_141d69220);
        return;
      }
    }
  }
  return;
}

