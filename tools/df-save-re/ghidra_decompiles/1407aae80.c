// FUN_1407aae80 @ 1407aae80
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1407ab160 FUN_1407ab160


void FUN_1407aae80(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined8 *local_res8;
  int local_res18 [2];
  
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1,(longlong)local_res18[0]);
  puVar4 = (undefined8 *)*param_1;
  piVar11 = (int *)0x0;
  piVar6 = (int *)((param_1[1] - (longlong)puVar4) + 7U >> 3);
  if ((undefined8 *)param_1[1] < puVar4) {
    piVar6 = piVar11;
  }
  piVar7 = piVar11;
  if (piVar6 != (int *)0x0) {
    do {
      FUN_1405bba90(param_2,&local_res8,4);
      iVar3 = (int)(DAT_141c68018 - DAT_141c68010 >> 3);
      piVar10 = piVar11;
      if (((iVar3 != 0) && ((int)local_res8 != -1)) && (iVar3 = iVar3 + -1, iVar9 = 0, -1 < iVar3))
      {
        do {
          iVar2 = iVar9 + iVar3 >> 1;
          piVar10 = *(int **)(DAT_141c68010 + (longlong)iVar2 * 8);
          iVar1 = *piVar10;
          if (iVar1 == (int)local_res8) break;
          if ((int)local_res8 < iVar1) {
            iVar3 = iVar2 + -1;
          }
          else {
            iVar9 = iVar2 + 1;
          }
          piVar10 = piVar11;
        } while (iVar9 <= iVar3);
      }
      *puVar4 = piVar10;
      piVar7 = (int *)((longlong)piVar7 + 1);
      puVar4 = puVar4 + 1;
    } while (piVar7 < piVar6);
  }
  if (0x62c < param_3) {
    FUN_1405bba90(param_2,param_1 + 3,4);
  }
  if (0x664 < param_3) {
    FUN_1405bba90(param_2,(longlong)param_1 + 0x1c,4);
  }
  if (0x649 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x11,4);
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      lVar5 = (longlong)param_1 + 0x54;
      lVar8 = 0xd;
      do {
        FUN_1405bba90(param_2,lVar5 + -0x34,4);
        FUN_1405bba90(param_2,lVar5,4);
        lVar5 = lVar5 + 4;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  if ((0x666 < param_3) && (FUN_1405bba90(param_2,local_res18,1), (char)local_res18[0] != '\0')) {
    local_res8 = operator_new(0x20);
    *local_res8 = 0;
    local_res8[1] = 0;
    local_res8[2] = 0;
    *(undefined4 *)(local_res8 + 3) = 0xffffffff;
    param_1[0x12] = local_res8;
    FUN_1407ab160(local_res8,param_2);
  }
  return;
}

