// FUN_1407ac1c0 @ 1407ac1c0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 14000bd10 FUN_14000bd10
//   -> 140dfb5c4 operator_new
//   -> 140002250 FUN_140002250


void FUN_1407ac1c0(ulonglong *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *local_res8;
  int local_res18 [2];
  int local_res20 [2];
  
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1,(longlong)local_res18[0]);
  FUN_14000b9d0(param_1 + 3,(longlong)local_res18[0]);
  plVar13 = (longlong *)*param_1;
  uVar14 = 0;
  puVar10 = (ulonglong *)param_1[3];
  uVar12 = (param_1[1] - (longlong)plVar13) + 7 >> 3;
  if ((longlong *)param_1[1] < plVar13) {
    uVar12 = uVar14;
  }
  uVar11 = uVar14;
  if (uVar12 != 0) {
    do {
      FUN_1405bba90(param_2,&local_res8,4);
      FUN_1405bba90(param_2,local_res20,4);
      lVar6 = *(longlong *)(DAT_141d779c0 + (longlong)(int)local_res8 * 8);
      *plVar13 = lVar6;
      iVar15 = (int)(*(longlong *)(lVar6 + 0x88) - *(longlong *)(lVar6 + 0x80) >> 3) + -1;
      uVar9 = uVar14;
      uVar16 = uVar14;
      if (-1 < iVar15) {
        do {
          iVar7 = iVar15 + (int)uVar16 >> 1;
          uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x80) + (longlong)iVar7 * 8);
          iVar5 = *(int *)(uVar9 + 8);
          if (iVar5 == local_res20[0]) break;
          if (local_res20[0] < iVar5) {
            iVar15 = iVar7 + -1;
          }
          else {
            uVar16 = (ulonglong)(iVar7 + 1);
          }
          uVar9 = uVar14;
        } while ((int)uVar16 <= iVar15);
      }
      *puVar10 = uVar9;
      plVar13 = plVar13 + 1;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar12);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 6,(longlong)local_res18[0]);
  puVar8 = (undefined8 *)param_1[6];
  uVar12 = (param_1[7] - (longlong)puVar8) + 7 >> 3;
  if ((undefined8 *)param_1[7] < puVar8) {
    uVar12 = uVar14;
  }
  if (uVar12 != 0) {
    do {
      FUN_1405bba90(param_2,&local_res8,4);
      uVar14 = uVar14 + 1;
      *puVar8 = *(undefined8 *)(DAT_141d779c0 + (longlong)(int)local_res8 * 8);
      puVar8 = puVar8 + 1;
    } while (uVar14 < uVar12);
  }
  FUN_1405bba90(param_2,param_1 + 9,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x4c,4);
  FUN_1405bba90(param_2,param_1 + 10,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x54,4);
  FUN_1405bba90(param_2,param_1 + 0xb,1);
  FUN_1405bb6d0(param_2,param_1 + 0xc);
  FUN_1405bb6d0(param_2,param_1 + 0x10);
  FUN_1405bb6d0(param_2,param_1 + 0x14);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0xc4,2);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x19,(longlong)local_res18[0]);
  uVar12 = param_1[0x1a];
  for (uVar14 = param_1[0x19]; uVar14 < uVar12; uVar14 = uVar14 + 4) {
    FUN_1405bba90(param_2,uVar14,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x1c,(longlong)local_res18[0]);
  uVar12 = param_1[0x1d];
  for (uVar14 = param_1[0x1c]; uVar14 < uVar12; uVar14 = uVar14 + 4) {
    FUN_1405bba90(param_2,uVar14,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x1f,(longlong)local_res18[0]);
  uVar12 = param_1[0x20];
  for (uVar14 = param_1[0x1f]; uVar14 < uVar12; uVar14 = uVar14 + 4) {
    FUN_1405bba90(param_2,uVar14,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x22,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x114,4);
  FUN_1405bba90(param_2,param_1 + 0x23,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x11c,4);
  FUN_1405bb6d0(param_2,param_1 + 0x24);
  FUN_1405bba90(param_2,param_1 + 0x28,4);
  if ((0x67e < param_3) && (FUN_1405bba90(param_2,local_res18,1), (char)local_res18[0] != '\0')) {
    local_res8 = operator_new(0x80);
    *local_res8 = 0;
    puVar8 = local_res8 + 6;
    local_res8[1] = 0;
    puVar1 = local_res8 + 9;
    local_res8[2] = 0;
    puVar2 = local_res8 + 0xc;
    local_res8[3] = 0;
    puVar3 = local_res8 + 3;
    local_res8[4] = 0;
    puVar4 = local_res8 + 0xf;
    local_res8[5] = 0;
    *puVar8 = 0;
    local_res8[7] = 0;
    local_res8[8] = 0;
    *puVar1 = 0;
    local_res8[10] = 0;
    local_res8[0xb] = 0;
    *puVar2 = 0;
    local_res8[0xd] = 0;
    local_res8[0xe] = 0;
    *(undefined4 *)puVar4 = 0;
    param_1[0x29] = (ulonglong)local_res8;
    FUN_140002250(param_2,local_res8);
    FUN_140002250(param_2,puVar3);
    FUN_140002250(param_2,puVar8);
    FUN_140002250(param_2,puVar1);
    FUN_140002250(param_2,puVar2);
    FUN_1405bba90(param_2,puVar4,4);
  }
  if ((0x681 < param_3) && (FUN_1405bba90(param_2,local_res18,1), (char)local_res18[0] != '\0')) {
    puVar8 = operator_new(0x30);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    param_1[0x2a] = (ulonglong)puVar8;
    FUN_140002250(param_2,puVar8);
    FUN_140002250(param_2,puVar8 + 3);
  }
  return;
}

