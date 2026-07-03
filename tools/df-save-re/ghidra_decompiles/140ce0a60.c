// FUN_140ce0a60 @ 140ce0a60
// callees:
//   -> 1401b81b0 FUN_1401b81b0
//   -> 140c61f70 FUN_140c61f70


void FUN_140ce0a60(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 *puVar3;
  short sVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 0xa78) == 0) {
    return;
  }
  if (param_2 < 1) {
    return;
  }
  puVar3 = (undefined4 *)FUN_1401b81b0(*(longlong *)(param_1 + 0xa78) + 0x248,1,0xffffffff);
  puVar3[1] = puVar3[1] + param_2;
  iVar5 = puVar3[1];
  if (100 < iVar5) {
    iVar5 = 100;
  }
  puVar3[1] = iVar5;
  cVar2 = FUN_140c61f70(param_1);
  if (cVar2 == '\0') {
    *puVar3 = 0xffffffff;
    puVar3[2] = 0;
    return;
  }
  *puVar3 = 0x40;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa78) + 0x3a0);
  sVar4 = *(short *)(*(longlong *)(param_1 + 0xa78) + 0x2ec);
  if (lVar1 == 0) {
LAB_140ce0afe:
    if (0x5a < sVar4) {
LAB_140ce0b04:
      param_2 = 0;
      goto LAB_140ce0b61;
    }
    if (0x4b < sVar4) {
      param_2 = param_2 / 10;
      goto LAB_140ce0b61;
    }
    if (0x3c < sVar4) {
      param_2 = param_2 / 2;
      goto LAB_140ce0b61;
    }
    if (9 < sVar4) {
      if (sVar4 < 0x19) {
        param_2 = param_2 * 10;
        if (100 < param_2) {
          param_2 = 100;
        }
      }
      else if ((sVar4 < 0x28) && (param_2 = param_2 * 2, 100 < param_2)) {
        param_2 = 100;
      }
      goto LAB_140ce0b61;
    }
  }
  else {
    sVar4 = sVar4 + *(short *)(lVar1 + 0x24);
    if (-1 < sVar4) {
      if (sVar4 < 0x65) goto LAB_140ce0afe;
      goto LAB_140ce0b04;
    }
  }
  param_2 = 100;
LAB_140ce0b61:
  puVar3[2] = puVar3[2] + param_2;
  if (100 < (int)puVar3[2]) {
    puVar3[2] = 100;
  }
  return;
}

