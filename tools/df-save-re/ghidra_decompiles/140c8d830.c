// FUN_140c8d830 @ 140c8d830
// callees:
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140dfb5c4 operator_new
//   -> 140050070 FUN_140050070
//   -> 1400b9180 FUN_1400b9180
//   -> 1400b9340 FUN_1400b9340


ulonglong FUN_140c8d830(short *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *local_res8;
  
  uVar3 = (int)*param_1 - 1;
  if (5 < uVar3) {
    return (ulonglong)uVar3;
  }
  uVar4 = (ulonglong)(int)uVar3;
  switch(uVar3) {
  case 0:
    uVar3 = FUN_1409fc0c0();
    if (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1e != 0)
    {
      puVar5 = operator_new(0x20);
      *(undefined4 *)(puVar5 + 1) = 0xffffffff;
      *puVar5 = art_image_element_creaturest::vftable;
      *(undefined4 *)(puVar5 + 2) = 0xffffffff;
      *(undefined2 *)((longlong)puVar5 + 0x14) = 0xffff;
      *(undefined4 *)(puVar5 + 3) = 0xffffffff;
      local_res8 = puVar5;
      uVar3 = FUN_1409fc0c0();
      *(uint *)(puVar5 + 1) =
           ((int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff + uVar3 >> 0x1e)
           + 1;
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(param_1 + 2);
      lVar1 = param_2[1];
      lVar2 = *param_2;
      local_res8 = puVar5;
      FUN_140050070(param_2,&local_res8);
      local_res8 = operator_new(0x28);
      local_res8 = (undefined8 *)FUN_1400b9180(local_res8);
      *(undefined4 *)(local_res8 + 3) = param_3;
      *(int *)((longlong)local_res8 + 0x1c) = (int)(lVar1 - lVar2 >> 3);
      *(undefined2 *)(local_res8 + 4) = 8;
      break;
    }
    local_res8 = operator_new(0x20);
    *local_res8 = art_image_element_creaturest::vftable;
    *(undefined4 *)(local_res8 + 2) = 0xffffffff;
    *(undefined2 *)((longlong)local_res8 + 0x14) = 0xffff;
    *(undefined4 *)(local_res8 + 3) = 0xffffffff;
    *(undefined4 *)(local_res8 + 1) = 0xffffffff;
    *(undefined4 *)(local_res8 + 2) = *(undefined4 *)(param_1 + 2);
    lVar1 = param_2[1];
    lVar2 = *param_2;
    FUN_140050070(param_2,&local_res8);
    local_res8 = operator_new(0x28);
    puVar5 = (undefined8 *)FUN_1400b9180(local_res8);
    *(undefined4 *)(puVar5 + 3) = param_3;
    *(int *)((longlong)puVar5 + 0x1c) = (int)(lVar1 - lVar2 >> 3);
    uVar3 = FUN_1409fc0c0();
    if ((uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff & 0xc0000000
        ) != 0) {
      *(undefined2 *)(puVar5 + 4) = 0x11;
      local_res8 = puVar5;
      break;
    }
    goto LAB_140c8dfd7;
  case 1:
    if (*(int *)(param_1 + 2) == 0x35) {
      local_res8 = operator_new(0x18);
      *local_res8 = art_image_element_plantst::vftable;
      *(undefined4 *)(local_res8 + 1) = 0xffffffff;
      *(undefined4 *)(local_res8 + 2) = *(undefined4 *)(param_1 + 8);
      lVar1 = param_2[1];
      lVar2 = *param_2;
      FUN_140050070(param_2,&local_res8);
      local_res8 = operator_new(0x28);
      puVar5 = (undefined8 *)FUN_1400b9180(local_res8);
      *(undefined4 *)(puVar5 + 3) = param_3;
      *(int *)((longlong)puVar5 + 0x1c) = (int)(lVar1 - lVar2 >> 3);
      uVar3 = FUN_1409fc0c0();
      if ((uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x2aaaaaab == 0) {
        *(undefined2 *)(puVar5 + 4) = 0x10;
      }
      else {
        uVar3 = FUN_1409fc0c0();
        if (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1e
            == 0) {
          *(undefined2 *)(puVar5 + 4) = 1;
        }
        else {
          *(undefined2 *)(puVar5 + 4) = 0x11;
        }
      }
      local_res8 = puVar5;
      uVar4 = FUN_140050070(param_2 + 3,&local_res8);
    }
    if (*(int *)(param_1 + 2) != 0x46) {
      return uVar4;
    }
    local_res8 = operator_new(0x20);
    *local_res8 = art_image_element_itemst::vftable;
    *(undefined2 *)((longlong)local_res8 + 0x12) = 0xffff;
    *(undefined2 *)((longlong)local_res8 + 0x14) = 0xffff;
    *(undefined2 *)((longlong)local_res8 + 0x16) = 0xffff;
    *(undefined4 *)(local_res8 + 3) = 0;
    *(undefined4 *)((longlong)local_res8 + 0x1c) = 0xffffffff;
    *(undefined4 *)(local_res8 + 1) = 0xffffffff;
    *(undefined2 *)(local_res8 + 2) = 0x46;
    lVar1 = param_2[1];
    lVar2 = *param_2;
    FUN_140050070(param_2,&local_res8);
    local_res8 = operator_new(0x28);
    puVar5 = (undefined8 *)FUN_1400b9180(local_res8);
    *(undefined4 *)(puVar5 + 3) = param_3;
    *(int *)((longlong)puVar5 + 0x1c) = (int)(lVar1 - lVar2 >> 3);
    uVar3 = FUN_1409fc0c0();
    if ((uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
        0x2aaaaaab == 0) {
      *(undefined2 *)(puVar5 + 4) = 0x10;
      local_res8 = puVar5;
      break;
    }
    uVar3 = FUN_1409fc0c0();
    uVar3 = uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff;
    goto joined_r0x000140c8d980;
  case 2:
    local_res8 = operator_new(0x20);
    *local_res8 = art_image_element_creaturest::vftable;
    *(undefined4 *)(local_res8 + 2) = 0xffffffff;
    *(undefined2 *)((longlong)local_res8 + 0x14) = 0xffff;
    *(undefined4 *)(local_res8 + 3) = 0xffffffff;
    *(undefined4 *)(local_res8 + 1) = 0xffffffff;
    *(undefined4 *)(local_res8 + 2) = *(undefined4 *)(param_1 + 2);
    lVar1 = param_2[1];
    lVar2 = *param_2;
    FUN_140050070(param_2,&local_res8);
    local_res8 = operator_new(0x28);
    local_res8 = (undefined8 *)FUN_1400b9180(local_res8);
    *(undefined4 *)(local_res8 + 3) = param_3;
    *(int *)((longlong)local_res8 + 0x1c) = (int)(lVar1 - lVar2 >> 3);
    *(undefined2 *)(local_res8 + 4) = 1;
    FUN_140050070(param_2 + 3,&local_res8);
    uVar3 = FUN_1409fc0c0();
    if (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1e == 0)
    {
      return (ulonglong)uVar3 * 3 & 0xffffffff;
    }
    local_res8 = operator_new(0x20);
    local_res8 = (undefined8 *)FUN_1400b9340(local_res8);
    *(undefined4 *)(local_res8 + 3) = param_3;
    *(undefined2 *)((longlong)local_res8 + 0x1c) = 0xf;
    break;
  case 3:
    uVar3 = FUN_1409fc0c0();
    if (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1e == 0)
    {
      local_res8 = operator_new(0x20);
      *local_res8 = art_image_element_itemst::vftable;
      *(undefined2 *)(local_res8 + 2) = 0xffff;
      *(undefined2 *)((longlong)local_res8 + 0x12) = 0xffff;
      *(undefined2 *)((longlong)local_res8 + 0x14) = 0xffff;
      *(undefined2 *)((longlong)local_res8 + 0x16) = 0xffff;
      *(undefined4 *)(local_res8 + 3) = 0;
      *(undefined4 *)((longlong)local_res8 + 0x1c) = 0xffffffff;
      *(undefined4 *)(local_res8 + 1) = 1;
      *(short *)(local_res8 + 2) = param_1[2];
      *(short *)((longlong)local_res8 + 0x12) = param_1[4];
      *(short *)((longlong)local_res8 + 0x14) = param_1[6];
      *(short *)((longlong)local_res8 + 0x16) = param_1[8];
      lVar1 = param_2[1];
      lVar2 = *param_2;
      FUN_140050070(param_2,&local_res8);
      local_res8 = operator_new(0x28);
      puVar5 = (undefined8 *)FUN_1400b9180(local_res8);
      *(undefined4 *)(puVar5 + 3) = param_3;
      *(int *)((longlong)puVar5 + 0x1c) = (int)(lVar1 - lVar2 >> 3);
      uVar3 = FUN_1409fc0c0();
      local_res8 = puVar5;
      if ((uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff &
          0xc0000000) == 0) {
        *(undefined2 *)(puVar5 + 4) = 0xc;
      }
      else {
        *(undefined2 *)(puVar5 + 4) = 0x11;
      }
      break;
    }
    local_res8 = operator_new(0x20);
    *local_res8 = art_image_element_itemst::vftable;
    *(undefined2 *)(local_res8 + 2) = 0xffff;
    *(undefined2 *)((longlong)local_res8 + 0x12) = 0xffff;
    *(undefined2 *)((longlong)local_res8 + 0x14) = 0xffff;
    *(undefined2 *)((longlong)local_res8 + 0x16) = 0xffff;
    *(undefined4 *)(local_res8 + 3) = 0;
    *(undefined4 *)((longlong)local_res8 + 0x1c) = 0xffffffff;
    *(undefined4 *)(local_res8 + 1) = 0xffffffff;
    *(short *)(local_res8 + 2) = param_1[2];
    *(short *)((longlong)local_res8 + 0x12) = param_1[4];
    *(short *)((longlong)local_res8 + 0x14) = param_1[6];
    *(short *)((longlong)local_res8 + 0x16) = param_1[8];
    lVar1 = param_2[1];
    lVar2 = *param_2;
    FUN_140050070(param_2,&local_res8);
    local_res8 = operator_new(0x28);
    puVar5 = (undefined8 *)FUN_1400b9180(local_res8);
    *(undefined4 *)(puVar5 + 3) = param_3;
    *(int *)((longlong)puVar5 + 0x1c) = (int)(lVar1 - lVar2 >> 3);
    uVar3 = FUN_1409fc0c0();
    uVar3 = uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff;
joined_r0x000140c8d980:
    if ((uVar3 & 0xc0000000) == 0) {
LAB_140c8dfd7:
      *(undefined2 *)(puVar5 + 4) = 1;
      local_res8 = puVar5;
    }
    else {
      *(undefined2 *)(puVar5 + 4) = 0x11;
      local_res8 = puVar5;
    }
    break;
  case 4:
    local_res8 = operator_new(0x18);
    *local_res8 = art_image_element_plantst::vftable;
    *(undefined4 *)(local_res8 + 1) = 0xffffffff;
    *(undefined4 *)(local_res8 + 2) = *(undefined4 *)(param_1 + 2);
    lVar1 = param_2[1];
    lVar2 = *param_2;
    FUN_140050070(param_2,&local_res8);
    local_res8 = operator_new(0x28);
    local_res8 = (undefined8 *)FUN_1400b9180(local_res8);
    *(undefined4 *)(local_res8 + 3) = param_3;
    *(int *)((longlong)local_res8 + 0x1c) = (int)(lVar1 - lVar2 >> 3);
    *(undefined2 *)(local_res8 + 4) = 1;
    break;
  case 5:
    local_res8 = operator_new(0x18);
    *local_res8 = art_image_element_treest::vftable;
    *(undefined4 *)(local_res8 + 1) = 0xffffffff;
    *(undefined4 *)(local_res8 + 2) = *(undefined4 *)(param_1 + 2);
    lVar1 = param_2[1];
    lVar2 = *param_2;
    FUN_140050070(param_2,&local_res8);
    local_res8 = operator_new(0x28);
    local_res8 = (undefined8 *)FUN_1400b9180(local_res8);
    *(undefined4 *)(local_res8 + 3) = param_3;
    *(int *)((longlong)local_res8 + 0x1c) = (int)(lVar1 - lVar2 >> 3);
    *(undefined2 *)(local_res8 + 4) = 1;
  }
  uVar4 = FUN_140050070(param_2 + 3,&local_res8);
  return uVar4;
}

