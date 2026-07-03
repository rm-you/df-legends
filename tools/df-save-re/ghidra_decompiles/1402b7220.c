// FUN_1402b7220 @ 1402b7220
// callees:
//   -> 140288480 FUN_140288480
//   -> 140dfc99c memset
//   -> 140051e20 FUN_140051e20
//   -> 14000c780 FUN_14000c780
//   -> 14000c8b0 FUN_14000c8b0


void FUN_1402b7220(undefined8 *param_1)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  int iVar8;
  
  FUN_140288480();
  puVar3 = param_1 + 0xbc;
  lVar4 = 0x32;
  iVar8 = 0;
  do {
    *(undefined2 *)((longlong)puVar3 + -100) = 0;
    *(undefined2 *)((longlong)puVar3 + 100) = 100;
    *(undefined2 *)puVar3 = 0x32;
    puVar3 = (undefined8 *)((longlong)puVar3 + 2);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if ((0 < *(int *)(param_1 + 0xd6)) && ((void *)param_1[0xd5] != (void *)0x0)) {
    memset((void *)param_1[0xd5],0,(longlong)*(int *)(param_1 + 0xd6));
  }
  lVar4 = 0x23;
  puVar3 = param_1;
  do {
    puVar3[2] = 0;
    puVar5 = puVar3;
    if (0xf < (ulonglong)puVar3[3]) {
      puVar5 = (undefined8 *)*puVar3;
    }
    puVar3 = puVar3 + 4;
    *(undefined1 *)puVar5 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar1 = param_1 + 0x300;
  lVar4 = 0x87;
  do {
    puVar1[-1] = 0;
    if (*puVar1 < 0x10) {
      puVar6 = puVar1 + -3;
    }
    else {
      puVar6 = (ulonglong *)puVar1[-3];
    }
    *(undefined1 *)puVar6 = 0;
    puVar1[0x21b] = 0;
    if (puVar1[0x21c] < 0x10) {
      puVar6 = puVar1 + 0x219;
    }
    else {
      puVar6 = (ulonglong *)puVar1[0x219];
    }
    puVar1 = puVar1 + 4;
    *(undefined1 *)puVar6 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar3 = param_1 + 0x745;
  *(undefined2 *)(param_1 + 0x744) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x3a24) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x751) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x3a8c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x75e) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x3af4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x75f) = 0xffff;
  *(undefined2 *)(param_1 + 0x76c) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x3b64) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x3bcc) = 0xffff;
  *(undefined4 *)(param_1 + 0x77a) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x3c3c) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0x3c3e) = 0xffff;
  *(undefined4 *)(param_1 + 0x788) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x795) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0x3caa) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x3cac) = 0xffffffff;
  param_1[0x747] = 0;
  if (0xf < (ulonglong)param_1[0x748]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x749;
  param_1[0x74b] = 0;
  if (0xf < (ulonglong)param_1[0x74c]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x74d;
  param_1[0x74f] = 0;
  if (0xf < (ulonglong)param_1[0x750]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x752;
  param_1[0x754] = 0;
  if (0xf < (ulonglong)param_1[0x755]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x756;
  param_1[0x758] = 0;
  if (0xf < (ulonglong)param_1[0x759]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x75a;
  param_1[0x75c] = 0;
  if (0xf < (ulonglong)param_1[0x75d]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x760;
  param_1[0x762] = 0;
  if (0xf < (ulonglong)param_1[0x763]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x764;
  param_1[0x766] = 0;
  if (0xf < (ulonglong)param_1[0x767]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x768;
  param_1[0x76a] = 0;
  if (0xf < (ulonglong)param_1[0x76b]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x76d;
  param_1[0x76f] = 0;
  if (0xf < (ulonglong)param_1[0x770]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x771;
  param_1[0x773] = 0;
  if (0xf < (ulonglong)param_1[0x774]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x775;
  param_1[0x777] = 0;
  if (0xf < (ulonglong)param_1[0x778]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x77b;
  param_1[0x77d] = 0;
  if (0xf < (ulonglong)param_1[0x77e]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x77f;
  param_1[0x781] = 0;
  if (0xf < (ulonglong)param_1[0x782]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x783;
  param_1[0x785] = 0;
  if (0xf < (ulonglong)param_1[0x786]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x789;
  param_1[0x78b] = 0;
  if (0xf < (ulonglong)param_1[0x78c]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x78d;
  param_1[0x78f] = 0;
  if (0xf < (ulonglong)param_1[0x790]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x791;
  param_1[0x793] = 0;
  if (0xf < (ulonglong)param_1[0x794]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x796;
  param_1[0x798] = 0;
  if (0xf < (ulonglong)param_1[0x799]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x79a;
  param_1[0x79c] = 0;
  if (0xf < (ulonglong)param_1[0x79d]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = param_1 + 0x79e;
  param_1[0x7a0] = 0;
  if (0xf < (ulonglong)param_1[0x7a1]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  param_1[0x7a3] = param_1[0x7a2];
  param_1[0x7a6] = param_1[0x7a5];
  FUN_140051e20(param_1 + 0x7a8);
  FUN_140051e20(param_1 + 0x7ab);
  FUN_140051e20(param_1 + 0x7ae);
  param_1[0x7b2] = param_1[0x7b1];
  param_1[0x7b5] = param_1[0x7b4];
  param_1[0x7b8] = param_1[0x7b7];
  param_1[0x7bb] = param_1[0x7ba];
  FUN_140051e20(param_1 + 0x7bd);
  FUN_140051e20(param_1 + 0x7c0);
  FUN_140051e20(param_1 + 0x7c3);
  FUN_140051e20(param_1 + 0x7c6);
  FUN_140051e20(param_1 + 0x7c9);
  *(undefined4 *)(param_1 + 0x779) = 0;
  *(undefined4 *)(param_1 + 0x787) = 0;
  param_1[0x82f] = param_1[0x82e];
  param_1[0x832] = param_1[0x831];
  FUN_140051e20(param_1 + 0x834);
  FUN_140051e20(param_1 + 0x837);
  puVar3 = param_1 + 4;
  FUN_14000c780(puVar3,"nothing",7);
  if (param_1 + 8 != puVar3) {
    FUN_14000c8b0(param_1 + 8,puVar3,0,0xffffffffffffffff);
  }
  if (param_1 + 0xc != puVar3) {
    FUN_14000c8b0(param_1 + 0xc,puVar3,0,0xffffffffffffffff);
  }
  FUN_14000c780(param_1 + 0x3c,"chunk",5);
  FUN_14000c780(param_1 + 0x40,"chunks",6);
  *(undefined8 *)((longlong)param_1 + 0x474) = 0x10003;
  *(undefined4 *)(param_1 + 0x95) = 1;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 1;
  puVar2 = (undefined4 *)((longlong)param_1 + 0x1534);
  param_1[0xa0] = 1;
  puVar7 = (undefined4 *)((longlong)param_1 + 0x11f4);
  *(undefined4 *)(param_1 + 0x8c) = 1;
  *(undefined4 *)(param_1 + 0xa1) = 1;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 1;
  *(undefined2 *)((longlong)param_1 + 0x46c) = 0xea61;
  *(undefined2 *)((longlong)param_1 + 0x466) = 0xea61;
  *(undefined2 *)(param_1 + 0x94) = 0x78;
  puVar3 = param_1 + 0x281;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x96) = 0x189c0;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 5;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x14;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 1000;
  *(undefined4 *)(param_1 + 0x97) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9f) = 0x32;
  *(undefined4 *)((longlong)param_1 + 0x48a) = 5;
  *(undefined4 *)((longlong)param_1 + 0x48e) = 0x10000;
  *(undefined2 *)(param_1 + 0x91) = 0;
  *(undefined4 *)(param_1 + 0x93) = 0x10000;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x3c0003;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0x32;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9d) = 0xffffffff;
  do {
    puVar7[-1] = 200;
    *puVar7 = 700;
    puVar7[1] = 900;
    puVar7[2] = 1000;
    puVar7[3] = 0x44c;
    puVar7[4] = 0x514;
    puVar7[5] = 2000;
    *(undefined4 *)((longlong)puVar3 + -4) = 500;
    if (-1 < iVar8) {
      if (iVar8 < 4) {
        *(undefined4 *)puVar3 = 3;
        *(undefined4 *)((longlong)puVar3 + 4) = 4;
        *(undefined4 *)(puVar3 + 1) = 3;
      }
      else if (iVar8 < 6) {
        *(undefined4 *)puVar3 = 0xffffffff;
        *(undefined4 *)((longlong)puVar3 + 4) = 0xffffffff;
        *(undefined4 *)(puVar3 + 1) = 0xffffffff;
      }
    }
    *puVar2 = 200;
    iVar8 = iVar8 + 1;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 7;
    puVar3 = puVar3 + 2;
  } while (iVar8 < 6);
  lVar4 = 0xd;
  puVar2 = (undefined4 *)((longlong)param_1 + 0x129c);
  puVar3 = param_1 + 0x28d;
  puVar7 = (undefined4 *)((longlong)param_1 + 0x154c);
  do {
    puVar2[-1] = 200;
    *puVar2 = 800;
    puVar2[1] = 900;
    puVar2[2] = 1000;
    puVar2[3] = 0x44c;
    puVar2[4] = 0x514;
    puVar2[5] = 2000;
    puVar2 = puVar2 + 7;
    *(undefined4 *)((longlong)puVar3 + -4) = 500;
    *(undefined4 *)puVar3 = 4;
    *(undefined4 *)((longlong)puVar3 + 4) = 5;
    *(undefined4 *)(puVar3 + 1) = 4;
    *puVar7 = 200;
    lVar4 = lVar4 + -1;
    puVar3 = puVar3 + 2;
    puVar7 = puVar7 + 1;
  } while (lVar4 != 0);
  puVar2 = (undefined4 *)((longlong)param_1 + 0xb0c);
  lVar4 = 0x93;
  do {
    puVar2[-0x93] = 100;
    *puVar2 = 8;
    puVar2[0x93] = 0x10;
    puVar2[0x126] = 0x10;
    puVar2 = puVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(undefined1 *)(param_1 + 0x2b0) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x1584) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x158c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1594) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b3) = 0xffffffff;
  param_1[0x736] = param_1[0x735];
  param_1[0x739] = param_1[0x738];
  FUN_140051e20(param_1 + 0x73b);
  FUN_140051e20(param_1 + 0x73e);
  FUN_140051e20(param_1 + 0x741);
  param_1[0x113] = param_1[0x112];
  FUN_140051e20(param_1 + 0x115);
  param_1[0x2b5] = param_1[0x2b4];
  param_1[0x2b8] = param_1[0x2b7];
  param_1[0x2c1] = param_1[0x2c0];
  param_1[0x2c4] = param_1[0x2c3];
  param_1[0x2c7] = param_1[0x2c6];
  param_1[0x2ca] = param_1[0x2c9];
  param_1[0x2cd] = param_1[0x2cc];
  param_1[0x2d0] = param_1[0x2cf];
  param_1[0x2f5] = param_1[0x2f4];
  param_1[0x2f8] = param_1[0x2f7];
  param_1[0x2fb] = param_1[0x2fa];
  param_1[0x2dc] = param_1[0x2db];
  param_1[0x2e8] = param_1[0x2e7];
  param_1[0x2df] = param_1[0x2de];
  param_1[0x2eb] = param_1[0x2ea];
  param_1[0x2e2] = param_1[0x2e1];
  param_1[0x2ee] = param_1[0x2ed];
  param_1[0x2e5] = param_1[0x2e4];
  param_1[0x2f1] = param_1[0x2f0];
  param_1[0x803] = param_1[0x802];
  param_1[0x806] = param_1[0x805];
  param_1[0x809] = param_1[0x808];
  param_1[0x80c] = param_1[0x80b];
  param_1[0x80f] = param_1[0x80e];
  param_1[0x812] = param_1[0x811];
  *(undefined2 *)(param_1 + 0x814) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x40a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x815) = 10000;
  *(undefined4 *)((longlong)param_1 + 0x40ac) = 10000;
  param_1[0x817] = param_1[0x816];
  param_1[0x81a] = param_1[0x819];
  param_1[0x81d] = param_1[0x81c];
  param_1[0x820] = param_1[0x81f];
  param_1[0x823] = param_1[0x822];
  param_1[0x826] = param_1[0x825];
  param_1[0x829] = param_1[0x828];
  FUN_140051e20(param_1 + 0x82b);
  puVar3 = param_1 + 0x847;
  *(undefined4 *)(param_1 + 0x846) = 0x32;
  *(undefined4 *)((longlong)param_1 + 0x4234) = 0x32;
  param_1[0x849] = 0;
  if (0xf < (ulonglong)param_1[0x84a]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  *(undefined4 *)(param_1 + 0x84b) = 0;
  FUN_140051e20(param_1 + 0x84c);
  param_1[0x850] = param_1[0x84f];
  param_1[0x853] = param_1[0x852];
  param_1[0x856] = param_1[0x855];
  param_1[0x859] = param_1[0x858];
  return;
}

