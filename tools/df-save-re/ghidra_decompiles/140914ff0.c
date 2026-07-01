// FUN_140914ff0 @ 140914ff0
// callees:
//   -> 1406f71b0 FUN_1406f71b0
//   -> 140914d80 FUN_140914d80


void FUN_140914ff0(longlong param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  
  sVar1 = *(short *)(param_1 + 0xd6);
  sVar2 = *(short *)(param_1 + 0xdc);
  if (sVar1 < 0x5b) {
    if (0x4b < sVar1) {
      uVar4 = 5;
      goto LAB_140915046;
    }
    if (0x3c < sVar1) {
      uVar4 = 2;
      goto LAB_140915046;
    }
    if (0x27 < sVar1) {
      uVar4 = 1;
      goto LAB_140915046;
    }
  }
  else {
    uVar4 = 10;
LAB_140915046:
    FUN_1406f71b0(param_1,0,0xffffffff,uVar4);
  }
  sVar1 = *(short *)(param_1 + 0xda);
  if (sVar1 < 0x5b) {
    if (0x4b < sVar1) {
      uVar4 = 5;
      goto LAB_14091508e;
    }
    if (0x3c < sVar1) {
      uVar4 = 2;
      goto LAB_14091508e;
    }
    if (0x27 < sVar1) {
      uVar4 = 1;
      goto LAB_14091508e;
    }
  }
  else {
    uVar4 = 10;
LAB_14091508e:
    FUN_1406f71b0(param_1,3,0xffffffff,uVar4);
  }
  sVar1 = *(short *)(param_1 + 0xe2);
  if (sVar1 < 0x5b) {
    if (0x4b < sVar1) {
      uVar4 = 5;
      goto LAB_1409150db;
    }
    if (0x3c < sVar1) {
      uVar4 = 2;
      goto LAB_1409150db;
    }
    if (0x27 < sVar1) {
      uVar4 = 1;
      goto LAB_1409150db;
    }
  }
  else {
    uVar4 = 10;
LAB_1409150db:
    FUN_1406f71b0(param_1,4,0xffffffff,uVar4);
  }
  if (sVar2 < 0x5b) {
    if (0x4b < sVar2) {
      uVar4 = 5;
      goto LAB_140915129;
    }
    if (0x3c < sVar2) {
      uVar4 = 2;
      goto LAB_140915129;
    }
    if (0x27 < sVar2) {
      uVar4 = 1;
      goto LAB_140915129;
    }
  }
  else {
    uVar4 = 10;
LAB_140915129:
    FUN_1406f71b0(param_1,5,0xffffffff,uVar4);
  }
  sVar1 = *(short *)(param_1 + 0x92);
  if (sVar1 < 0x5b) {
    if (0x4b < sVar1) {
      uVar4 = 5;
      goto LAB_140915172;
    }
    if (0x3c < sVar1) {
      uVar4 = 2;
      goto LAB_140915172;
    }
    if (0x27 < sVar1) {
      uVar4 = 1;
      goto LAB_140915172;
    }
  }
  else {
    uVar4 = 10;
LAB_140915172:
    FUN_1406f71b0(param_1,0x14,0xffffffff,uVar4);
  }
  sVar1 = *(short *)(param_1 + 0x94);
  if (sVar1 < 0x5b) {
    if (0x4b < sVar1) {
      FUN_1406f71b0(param_1,1,0xffffffff);
      uVar4 = 5;
      goto LAB_140915216;
    }
    if (0x3c < sVar1) {
      FUN_1406f71b0(param_1,1,0xffffffff);
      uVar4 = 2;
      goto LAB_140915216;
    }
    if (0x27 < sVar1) {
      FUN_1406f71b0(param_1,1,0xffffffff);
      uVar4 = 1;
      goto LAB_140915216;
    }
  }
  else {
    FUN_1406f71b0(param_1,1,0xffffffff);
    uVar4 = 10;
LAB_140915216:
    FUN_1406f71b0(param_1,0x15,0xffffffff,uVar4);
  }
  sVar1 = *(short *)(param_1 + 0x96);
  if (sVar1 < 0x5b) {
    if (0x4b < sVar1) {
      uVar4 = 5;
      goto LAB_140915263;
    }
    if (0x3c < sVar1) {
      uVar4 = 2;
      goto LAB_140915263;
    }
    if (0x27 < sVar1) {
      uVar4 = 1;
      goto LAB_140915263;
    }
  }
  else {
    uVar4 = 10;
LAB_140915263:
    FUN_1406f71b0(param_1,0x16,0xffffffff,uVar4);
  }
  sVar1 = *(short *)(param_1 + 0x9c);
  if (sVar1 < 0x5b) {
    if (0x4b < sVar1) {
      uVar4 = 5;
      goto LAB_1409152b0;
    }
    if (0x3c < sVar1) {
      uVar4 = 2;
      goto LAB_1409152b0;
    }
    if (0x27 < sVar1) {
      uVar4 = 1;
      goto LAB_1409152b0;
    }
  }
  else {
    uVar4 = 10;
LAB_1409152b0:
    FUN_1406f71b0(param_1,0x17,0xffffffff,uVar4);
  }
  sVar1 = *(short *)(param_1 + 0x9e);
  if (sVar1 < 10) {
    uVar4 = 10;
LAB_1409152fd:
    FUN_1406f71b0(param_1,0x18,0xffffffff,uVar4);
  }
  else {
    if (sVar1 < 0x19) {
      uVar4 = 5;
      goto LAB_1409152fd;
    }
    if (sVar1 < 0x28) {
      uVar4 = 2;
      goto LAB_1409152fd;
    }
    if (sVar1 < 0x3d) {
      uVar4 = 1;
      goto LAB_1409152fd;
    }
  }
  sVar1 = *(short *)(param_1 + 0xae);
  if (sVar1 < 0x5b) {
    if (0x4b < sVar1) {
      uVar4 = 5;
      goto LAB_14091534a;
    }
    if (0x3c < sVar1) {
      uVar4 = 2;
      goto LAB_14091534a;
    }
    if (0x27 < sVar1) {
      uVar4 = 1;
      goto LAB_14091534a;
    }
  }
  else {
    uVar4 = 10;
LAB_14091534a:
    FUN_1406f71b0(param_1,0x19,0xffffffff,uVar4);
  }
  sVar1 = *(short *)(param_1 + 0xbc);
  if (sVar1 < 0x5b) {
    if (0x4b < sVar1) {
      uVar4 = 5;
      goto LAB_140915397;
    }
    if (0x3c < sVar1) {
      uVar4 = 2;
      goto LAB_140915397;
    }
    if (0x27 < sVar1) {
      uVar4 = 1;
      goto LAB_140915397;
    }
  }
  else {
    uVar4 = 10;
LAB_140915397:
    FUN_1406f71b0(param_1,6,0xffffffff,uVar4);
  }
  if (0x3c < sVar2) {
    if (sVar1 < 0x5b) {
      if (sVar1 < 0x4c) {
        if (sVar1 < 0x3d) {
          if (sVar1 < 0x28) goto LAB_1409153f3;
          uVar4 = 1;
        }
        else {
          uVar4 = 2;
        }
      }
      else {
        uVar4 = 5;
      }
    }
    else {
      uVar4 = 10;
    }
    FUN_1406f71b0(param_1,0x1a,0xffffffff,uVar4);
  }
LAB_1409153f3:
  sVar1 = *(short *)(param_1 + 0xcc);
  if (sVar1 < 0x5b) {
    if (0x4b < sVar1) {
      uVar4 = 5;
      goto LAB_140915430;
    }
    if (0x3c < sVar1) {
      uVar4 = 2;
      goto LAB_140915430;
    }
    if (0x27 < sVar1) {
      uVar4 = 1;
      goto LAB_140915430;
    }
  }
  else {
    uVar4 = 10;
LAB_140915430:
    FUN_1406f71b0(param_1,0x1b,0xffffffff,uVar4);
  }
  sVar1 = *(short *)(param_1 + 0xe0);
  if (sVar1 < 0x5b) {
    if (0x4b < sVar1) {
      uVar4 = 5;
      goto LAB_14091547d;
    }
    if (0x3c < sVar1) {
      uVar4 = 2;
      goto LAB_14091547d;
    }
    if (0x27 < sVar1) {
      uVar4 = 1;
      goto LAB_14091547d;
    }
  }
  else {
    uVar4 = 10;
LAB_14091547d:
    FUN_1406f71b0(param_1,0x1c,0xffffffff,uVar4);
  }
  iVar3 = FUN_140914d80(param_1,0x17);
  if (iVar3 < 0x29) {
    if (0x19 < iVar3) {
      uVar4 = 2;
      goto LAB_1409154bf;
    }
    if (10 < iVar3) {
      uVar4 = 1;
      goto LAB_1409154bf;
    }
  }
  else {
    uVar4 = 5;
LAB_1409154bf:
    FUN_1406f71b0(param_1,3,0xffffffff,uVar4);
  }
  iVar3 = FUN_140914d80(param_1,0x13);
  if (iVar3 < 0x29) {
    if (0x19 < iVar3) {
      uVar4 = 2;
      goto LAB_140915501;
    }
    if (10 < iVar3) {
      uVar4 = 1;
      goto LAB_140915501;
    }
  }
  else {
    uVar4 = 5;
LAB_140915501:
    FUN_1406f71b0(param_1,0xc,0xffffffff,uVar4);
  }
  iVar3 = FUN_140914d80(param_1,0xb);
  if (iVar3 < 0x29) {
    if (0x19 < iVar3) {
      uVar4 = 2;
      goto LAB_140915543;
    }
    if (10 < iVar3) {
      uVar4 = 1;
      goto LAB_140915543;
    }
  }
  else {
    uVar4 = 5;
LAB_140915543:
    FUN_1406f71b0(param_1,0x1d,0xffffffff,uVar4);
  }
  iVar3 = FUN_140914d80(param_1,0x14);
  if (iVar3 < 0x29) {
    if (0x19 < iVar3) {
      uVar4 = 2;
      goto LAB_140915585;
    }
    if (10 < iVar3) {
      uVar4 = 1;
      goto LAB_140915585;
    }
  }
  else {
    uVar4 = 5;
LAB_140915585:
    FUN_1406f71b0(param_1,0xd,0xffffffff,uVar4);
  }
  iVar3 = FUN_140914d80(param_1,0x20);
  if (iVar3 < 0x29) {
    if (0x19 < iVar3) {
      uVar4 = 2;
      goto LAB_1409155c7;
    }
    if (10 < iVar3) {
      uVar4 = 1;
      goto LAB_1409155c7;
    }
  }
  else {
    uVar4 = 5;
LAB_1409155c7:
    FUN_1406f71b0(param_1,6,0xffffffff,uVar4);
  }
  iVar3 = FUN_140914d80(param_1,2);
  if (iVar3 < 0x29) {
    if (0x19 < iVar3) {
      uVar4 = 2;
      goto LAB_140915609;
    }
    if (10 < iVar3) {
      uVar4 = 1;
      goto LAB_140915609;
    }
  }
  else {
    uVar4 = 5;
LAB_140915609:
    FUN_1406f71b0(param_1,7,0xffffffff,uVar4);
  }
  iVar3 = FUN_140914d80(param_1,3);
  if (iVar3 < 0x29) {
    if (0x19 < iVar3) {
      uVar4 = 2;
      goto LAB_14091564b;
    }
    if (10 < iVar3) {
      uVar4 = 1;
      goto LAB_14091564b;
    }
  }
  else {
    uVar4 = 5;
LAB_14091564b:
    FUN_1406f71b0(param_1,8,0xffffffff,uVar4);
  }
  iVar3 = FUN_140914d80(param_1,7);
  if (iVar3 < 0x29) {
    if (0x19 < iVar3) {
      uVar4 = 2;
      goto LAB_14091568d;
    }
    if (10 < iVar3) {
      uVar4 = 1;
      goto LAB_14091568d;
    }
  }
  else {
    uVar4 = 5;
LAB_14091568d:
    FUN_1406f71b0(param_1,9,0xffffffff,uVar4);
  }
  iVar3 = FUN_140914d80(param_1,10);
  if (iVar3 < 0x29) {
    if (0x19 < iVar3) {
      uVar4 = 2;
      goto LAB_1409156cf;
    }
    if (10 < iVar3) {
      uVar4 = 1;
      goto LAB_1409156cf;
    }
  }
  else {
    uVar4 = 5;
LAB_1409156cf:
    FUN_1406f71b0(param_1,10,0xffffffff,uVar4);
  }
  iVar3 = FUN_140914d80(param_1,0xf);
  if (iVar3 < 0x29) {
    if (0x19 < iVar3) {
      uVar4 = 2;
      goto LAB_140915711;
    }
    if (10 < iVar3) {
      uVar4 = 1;
      goto LAB_140915711;
    }
  }
  else {
    uVar4 = 5;
LAB_140915711:
    FUN_1406f71b0(param_1,0xb,0xffffffff,uVar4);
  }
  iVar3 = FUN_140914d80(param_1,0x15);
  if (iVar3 < 0x29) {
    if (0x19 < iVar3) {
      uVar4 = 2;
      goto LAB_140915753;
    }
    if (10 < iVar3) {
      uVar4 = 1;
      goto LAB_140915753;
    }
  }
  else {
    uVar4 = 5;
LAB_140915753:
    FUN_1406f71b0(param_1,0xe,0xffffffff,uVar4);
  }
  iVar3 = FUN_140914d80(param_1,0x16);
  if (iVar3 < 0x29) {
    if (0x19 < iVar3) {
      uVar4 = 2;
      goto LAB_140915795;
    }
    if (10 < iVar3) {
      uVar4 = 1;
      goto LAB_140915795;
    }
  }
  else {
    uVar4 = 5;
LAB_140915795:
    FUN_1406f71b0(param_1,0xf,0xffffffff,uVar4);
  }
  iVar3 = FUN_140914d80(param_1,0x1b);
  if (iVar3 < 0x29) {
    if (0x19 < iVar3) {
      uVar4 = 2;
      goto LAB_1409157d7;
    }
    if (10 < iVar3) {
      uVar4 = 1;
      goto LAB_1409157d7;
    }
  }
  else {
    uVar4 = 5;
LAB_1409157d7:
    FUN_1406f71b0(param_1,0x10,0xffffffff,uVar4);
  }
  iVar3 = FUN_140914d80(param_1,0x1d);
  if (iVar3 < 0x29) {
    if (0x19 < iVar3) {
      uVar4 = 2;
      goto LAB_140915819;
    }
    if (10 < iVar3) {
      uVar4 = 1;
      goto LAB_140915819;
    }
  }
  else {
    uVar4 = 5;
LAB_140915819:
    FUN_1406f71b0(param_1,0x11,0xffffffff,uVar4);
  }
  iVar3 = FUN_140914d80(param_1,0x12);
  if (iVar3 < -0x28) {
    uVar4 = 5;
LAB_14091585b:
    FUN_1406f71b0(param_1,0x17,0xffffffff,uVar4);
  }
  else {
    if (iVar3 < -0x19) {
      uVar4 = 2;
      goto LAB_14091585b;
    }
    if (iVar3 < -10) {
      uVar4 = 1;
      goto LAB_14091585b;
    }
  }
  iVar3 = FUN_140914d80(param_1,0x1e);
  if (iVar3 < 0x29) {
    if (iVar3 < 0x1a) {
      if (iVar3 < 0xb) goto LAB_1409158f1;
      FUN_1406f71b0(param_1,0x12,0xffffffff);
      uVar4 = 1;
    }
    else {
      FUN_1406f71b0(param_1,0x12,0xffffffff);
      uVar4 = 2;
    }
  }
  else {
    FUN_1406f71b0(param_1,0x12,0xffffffff);
    uVar4 = 5;
  }
  FUN_1406f71b0(param_1,0x1a,0xffffffff,uVar4);
LAB_1409158f1:
  if (0x19 < iVar3) {
    if (sVar2 < 0x5b) {
      if (sVar2 < 0x4c) {
        if (sVar2 < 0x3d) {
          return;
        }
        uVar4 = 1;
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 5;
    }
    FUN_1406f71b0(param_1,0x13,0xffffffff,uVar4);
  }
  return;
}

