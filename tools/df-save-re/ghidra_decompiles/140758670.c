// FUN_140758670 @ 140758670
// callees:
//   -> 14000be20 FUN_14000be20
//   -> 14000c390 FUN_14000c390


ulonglong FUN_140758670(longlong *param_1,short param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  short *psVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  short local_res10 [4];
  int local_res18 [2];
  
  psVar5 = (short *)*param_1;
  do {
    if ((short *)param_1[1] <= psVar5) {
LAB_1407586a2:
      if (0 < param_3) {
        if (param_4 < param_3) {
          param_3 = param_4;
        }
        local_res10[0] = param_2;
        local_res18[0] = param_3;
        FUN_14000be20(param_1,local_res10);
        piVar3 = (int *)param_1[4];
        if ((local_res18 < piVar3) && (piVar4 = (int *)param_1[3], piVar4 <= local_res18)) {
          if (piVar3 == (int *)param_1[5]) {
            FUN_14000c390(param_1 + 3,1);
          }
          if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
            *(undefined4 *)param_1[4] =
                 *(undefined4 *)(param_1[3] + ((longlong)local_res18 - (longlong)piVar4 >> 2) * 4);
          }
        }
        else {
          if (piVar3 == (int *)param_1[5]) {
            FUN_14000c390(param_1 + 3,1);
          }
          if ((int *)param_1[4] != (int *)0x0) {
            *(int *)param_1[4] = param_3;
          }
        }
        param_1[4] = param_1[4] + 4;
        return (ulonglong)((int)(param_1[1] - *param_1 >> 1) - 1);
      }
      return 0xffffffff;
    }
    if (*psVar5 == param_2) {
      uVar6 = (longlong)psVar5 - *param_1 >> 1;
      if ((int)uVar6 != -1) {
        lVar2 = param_1[3];
        lVar7 = (longlong)(int)uVar6;
        iVar1 = *(int *)(lVar2 + lVar7 * 4);
        iVar8 = param_3 + iVar1;
        if ((param_4 < iVar8) && (0 < param_3)) {
          if (iVar1 < param_4) {
            *(int *)(lVar2 + lVar7 * 4) = param_4;
          }
        }
        else {
          *(int *)(lVar2 + lVar7 * 4) = iVar8;
        }
        iVar1 = *(int *)(lVar2 + lVar7 * 4);
        if (-1 < iVar1) {
          if (iVar1 < 0x3b9aca01) {
            return uVar6;
          }
          *(undefined4 *)(lVar2 + lVar7 * 4) = 1000000000;
          return uVar6;
        }
        *(undefined4 *)(lVar2 + lVar7 * 4) = 0;
        return uVar6;
      }
      goto LAB_1407586a2;
    }
    psVar5 = psVar5 + 1;
  } while( true );
}

