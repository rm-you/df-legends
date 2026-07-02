// FUN_140d381a0 @ 140d381a0
// callees:
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1408dd9f0 FUN_1408dd9f0
//   -> 1408ddc20 FUN_1408ddc20
//   -> 140846140 FUN_140846140
//   -> 1402bb0e0 FUN_1402bb0e0
//   -> 14053c560 FUN_14053c560
//   -> 140a3f220 FUN_140a3f220
//   -> 1407db450 FUN_1407db450
//   -> 1408a5170 FUN_1408a5170
//   -> 140051b70 FUN_140051b70


void FUN_140d381a0(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  
  FUN_14000b9d0(param_2,*(longlong *)(param_1 + 0x132f60) - *(longlong *)(param_1 + 0x132f58) >> 3);
  puVar4 = (undefined8 *)*param_2;
  uVar6 = 0;
  puVar8 = *(undefined8 **)(param_1 + 0x132f58);
  uVar5 = (param_2[1] - (longlong)puVar4) + 7U >> 3;
  if ((undefined8 *)param_2[1] < puVar4) {
    uVar5 = uVar6;
  }
  uVar9 = uVar6;
  if (uVar5 != 0) {
    do {
      puVar3 = operator_new(0x40);
      *puVar4 = puVar3;
      puVar1 = (undefined4 *)*puVar8;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 + 1;
      puVar4 = puVar4 + 1;
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      puVar3[2] = puVar1[2];
      puVar3[3] = puVar1[3];
      puVar3[4] = puVar1[4];
      puVar3[5] = puVar1[5];
      puVar3[6] = puVar1[6];
      puVar3[7] = puVar1[7];
      puVar3[8] = puVar1[8];
      puVar3[9] = puVar1[9];
      puVar3[10] = puVar1[10];
      puVar3[0xb] = puVar1[0xb];
      puVar3[0xc] = puVar1[0xc];
      puVar3[0xd] = puVar1[0xd];
      puVar3[0xe] = puVar1[0xe];
      puVar3[0xf] = puVar1[0xf];
    } while (uVar9 < uVar5);
  }
  FUN_1408dd9f0(&DAT_141d6dbe0,param_2 + 3);
  FUN_1408ddc20(&DAT_141d6dc10,param_2 + 6);
  FUN_140846140(&DAT_141d6ddb8,param_2 + 9);
  FUN_1402bb0e0(&DAT_141d6dd30,param_2 + 0xc);
  FUN_14053c560(&DAT_141d6e190,param_2 + 0xf);
  FUN_140a3f220(&DAT_141d77940,param_2 + 0x12);
  FUN_1407db450(&DAT_141d779c0,param_2 + 0x15);
  FUN_1408a5170(&DAT_141d6e1a8,param_2 + 0x18);
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x11a778) - *(longlong *)(param_1 + 0x11a770) >> 3 != 0) {
    do {
      lVar2 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x11a770));
      if ((*(int *)(lVar2 + 0x40) < 1) || ((**(byte **)(lVar2 + 0x38) & 2) == 0)) {
        FUN_140051b70(param_2 + 0x1b);
      }
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x11a778) - *(longlong *)(param_1 + 0x11a770) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x11a7a8) - *(longlong *)(param_1 + 0x11a7a0) >> 3 != 0) {
    do {
      lVar2 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x11a7a0));
      if ((*(int *)(lVar2 + 0x48) < 2) || ((*(byte *)(*(longlong *)(lVar2 + 0x40) + 1) & 8) == 0)) {
        FUN_140051b70(param_2 + 0x1e);
      }
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x11a7a8) - *(longlong *)(param_1 + 0x11a7a0) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x11a760) - *(longlong *)(param_1 + 0x11a758) >> 3 != 0) {
    do {
      FUN_140051b70(param_2 + 0x48,*(undefined8 *)(*(longlong *)(param_1 + 0x11a758) + uVar5));
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x11a760) - *(longlong *)(param_1 + 0x11a758) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x11a850) - *(longlong *)(param_1 + 0x11a848) >> 3 != 0) {
    do {
      FUN_140051b70(param_2 + 0x4b,*(undefined8 *)(*(longlong *)(param_1 + 0x11a848) + uVar5));
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x11a850) - *(longlong *)(param_1 + 0x11a848) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x11a868) - *(longlong *)(param_1 + 0x11a860) >> 3 != 0) {
    do {
      FUN_140051b70(param_2 + 0x4e,*(undefined8 *)(*(longlong *)(param_1 + 0x11a860) + uVar5));
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x11a868) - *(longlong *)(param_1 + 0x11a860) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x11a8b0) - *(longlong *)(param_1 + 0x11a8a8) >> 3 != 0) {
    do {
      FUN_140051b70(param_2 + 0x51,*(undefined8 *)(*(longlong *)(param_1 + 0x11a8a8) + uVar5));
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x11a8b0) - *(longlong *)(param_1 + 0x11a8a8) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x11a880) - *(longlong *)(param_1 + 0x11a878) >> 3 != 0) {
    do {
      FUN_140051b70(param_2 + 0x21,*(undefined8 *)(*(longlong *)(param_1 + 0x11a878) + uVar5));
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x11a880) - *(longlong *)(param_1 + 0x11a878) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x11a898) - *(longlong *)(param_1 + 0x11a890) >> 3 != 0) {
    do {
      FUN_140051b70(param_2 + 0x24,*(undefined8 *)(*(longlong *)(param_1 + 0x11a890) + uVar5));
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x11a898) - *(longlong *)(param_1 + 0x11a890) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x11a8e8) - *(longlong *)(param_1 + 0x11a8e0) >> 3 != 0) {
    do {
      lVar2 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x11a8e0));
      if ((*(int *)(lVar2 + 0x1b0) < 0xc) ||
         ((*(byte *)(*(longlong *)(lVar2 + 0x1a8) + 0xb) & 8) == 0)) {
        FUN_140051b70(param_2 + 0x27);
      }
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x11a8e8) - *(longlong *)(param_1 + 0x11a8e0) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x11a950) - *(longlong *)(param_1 + 0x11a948) >> 3 != 0) {
    do {
      lVar2 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x11a948));
      if ((*(int *)(lVar2 + 0x38) < 1) || ((**(byte **)(lVar2 + 0x30) & 1) == 0)) {
        FUN_140051b70(param_2 + 0x2a,lVar2 + 8);
      }
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x11a950) - *(longlong *)(param_1 + 0x11a948) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x124508) - *(longlong *)(param_1 + 0x124500) >> 3 != 0) {
    do {
      FUN_140051b70(param_2 + 0x2d,*(longlong *)(*(longlong *)(param_1 + 0x124500) + uVar5) + 8);
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x124508) - *(longlong *)(param_1 + 0x124500) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x11ad28) - *(longlong *)(param_1 + 0x11ad20) >> 3 != 0) {
    do {
      lVar2 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x11ad20));
      if ((*(int *)(lVar2 + 0x3a8) < 6) ||
         ((*(byte *)(*(longlong *)(lVar2 + 0x3a0) + 5) & 0x10) == 0)) {
        FUN_140051b70(param_2 + 0x30);
      }
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x11ad28) - *(longlong *)(param_1 + 0x11ad20) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x11ad40) - *(longlong *)(param_1 + 0x11ad38) >> 3 != 0) {
    do {
      if ((*(uint *)(*(longlong *)(uVar5 + *(longlong *)(param_1 + 0x11ad38)) + 0x148) & 0x10000) ==
          0) {
        FUN_140051b70(param_2 + 0x33);
      }
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x11ad40) - *(longlong *)(param_1 + 0x11ad38) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x11ad58) - *(longlong *)(param_1 + 0x11ad50) >> 3 != 0) {
    do {
      if ((*(byte *)(*(longlong *)(uVar5 + *(longlong *)(param_1 + 0x11ad50)) + 0x50) & 1) == 0) {
        FUN_140051b70(param_2 + 0x36);
      }
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x11ad58) - *(longlong *)(param_1 + 0x11ad50) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x11ad70) - *(longlong *)(param_1 + 0x11ad68) >> 3 != 0) {
    do {
      if ((*(byte *)(*(longlong *)(uVar5 + *(longlong *)(param_1 + 0x11ad68)) + 0x68) & 1) == 0) {
        FUN_140051b70(param_2 + 0x39);
      }
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x11ad70) - *(longlong *)(param_1 + 0x11ad68) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x124448) - *(longlong *)(param_1 + 0x124440) >> 3 != 0) {
    do {
      FUN_140051b70(param_2 + 0x3c,*(undefined8 *)(uVar5 + *(longlong *)(param_1 + 0x124440)));
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x124448) - *(longlong *)(param_1 + 0x124440) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x124460) - *(longlong *)(param_1 + 0x124458) >> 3 != 0) {
    do {
      FUN_140051b70(param_2 + 0x3f,*(undefined8 *)(uVar5 + *(longlong *)(param_1 + 0x124458)));
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x124460) - *(longlong *)(param_1 + 0x124458) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x124478) - *(longlong *)(param_1 + 0x124470) >> 3 != 0) {
    do {
      FUN_140051b70(param_2 + 0x42,*(undefined8 *)(uVar5 + *(longlong *)(param_1 + 0x124470)));
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x124478) - *(longlong *)(param_1 + 0x124470) >> 3)
            );
  }
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (*(longlong *)(param_1 + 0x1244d8) - *(longlong *)(param_1 + 0x1244d0) >> 3 != 0) {
    do {
      lVar2 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x1244d0));
      if ((*(int *)(lVar2 + 0x48) < 1) || ((**(byte **)(lVar2 + 0x40) & 8) == 0)) {
        FUN_140051b70(param_2 + 0x45);
      }
      uVar7 = (int)uVar9 + 1;
      uVar5 = uVar5 + 8;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x1244d8) - *(longlong *)(param_1 + 0x1244d0) >> 3)
            );
  }
  uVar5 = uVar6;
  if (*(longlong *)(param_1 + 0x124558) - *(longlong *)(param_1 + 0x124550) >> 3 != 0) {
    do {
      lVar2 = *(longlong *)(uVar6 + *(longlong *)(param_1 + 0x124550));
      if ((*(int *)(lVar2 + 0x48) < 1) || ((**(byte **)(lVar2 + 0x40) & 1) == 0)) {
        FUN_140051b70(param_2 + 0x54);
      }
      uVar7 = (int)uVar5 + 1;
      uVar6 = uVar6 + 8;
      uVar5 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x124558) - *(longlong *)(param_1 + 0x124550) >> 3)
            );
  }
  return;
}

