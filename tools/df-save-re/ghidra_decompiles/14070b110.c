// FUN_14070b110 @ 14070b110
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new
//   -> 140002140 FUN_140002140
//   -> 140002250 FUN_140002250
//   -> 1406f8600 FUN_1406f8600
//   -> 1401b7c10 FUN_1401b7c10
//   -> 1406f68a0 FUN_1406f68a0
//   -> 1406f7f00 FUN_1406f7f00
//   -> 1406f8040 FUN_1406f8040
//   -> 1406f5460 FUN_1406f5460
//   -> 140010740 FUN_140010740
//   -> 1407ab630 FUN_1407ab630
//   -> 1406f9d70 FUN_1406f9d70
//   -> 1407ac1c0 FUN_1407ac1c0
//   -> 1407aae80 FUN_1407aae80
//   -> 1406f9200 FUN_1406f9200
//   -> 1407b4ee0 FUN_1407b4ee0


void FUN_14070b110(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *local_res20;
  
  FUN_1405bba90(param_2,&local_res20,1,param_4,0xfffffffffffffffe);
  if ((char)local_res20 == '\0') {
    *param_1 = 0;
  }
  else {
    puVar1 = operator_new(0x30);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *param_1 = puVar1;
    FUN_140002140(param_2,puVar1);
    if (0x67d < param_3) {
      FUN_140002250(param_2,puVar1 + 3);
    }
  }
  FUN_1405bba90(param_2,&local_res20,1);
  if ((char)local_res20 == '\0') {
    param_1[1] = 0;
  }
  else {
    local_res20 = operator_new(0x78);
    *local_res20 = 0;
    local_res20[1] = 0;
    local_res20[2] = 0;
    local_res20[3] = 0;
    local_res20[4] = 0;
    local_res20[5] = 0;
    local_res20[6] = 0;
    local_res20[7] = 0;
    local_res20[8] = 0;
    local_res20[9] = 0;
    local_res20[10] = 0;
    local_res20[0xb] = 0;
    *(undefined2 *)(local_res20 + 0xc) = 0x66;
    *(undefined8 *)((longlong)local_res20 + 100) = 0;
    local_res20[0xe] = 0;
    param_1[1] = local_res20;
    FUN_1406f8600(local_res20,param_2,param_3);
  }
  FUN_1405bba90(param_2,&local_res20,1);
  if ((char)local_res20 == '\0') {
    param_1[2] = 0;
  }
  else {
    puVar1 = operator_new(0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    param_1[2] = puVar1;
    FUN_140002140(param_2,puVar1);
  }
  FUN_1405bba90(param_2,&local_res20,1);
  if ((char)local_res20 == '\0') {
    param_1[3] = 0;
  }
  else {
    puVar1 = operator_new(400);
    local_res20 = puVar1;
    FUN_1401b7c10(puVar1);
    *(undefined2 *)(puVar1 + 0x31) = 0xffff;
    param_1[3] = puVar1;
    FUN_1406f68a0(puVar1,param_2,param_3);
    if (0x615 < param_3) {
      FUN_1405bba90(param_2,puVar1 + 0x31,2);
    }
  }
  FUN_1405bba90(param_2,&local_res20,1);
  if ((char)local_res20 == '\0') {
    param_1[4] = 0;
  }
  else {
    puVar1 = operator_new(0x60);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    param_1[4] = puVar1;
    FUN_140002250(param_2,puVar1);
    FUN_140002250(param_2,puVar1 + 3);
    if (0x605 < param_3) {
      FUN_140002250(param_2,puVar1 + 6);
      FUN_140002140(param_2,puVar1 + 9);
    }
  }
  FUN_1405bba90(param_2,&local_res20,1);
  if ((char)local_res20 == '\0') {
    param_1[5] = 0;
  }
  else {
    local_res20 = operator_new(0x3c);
    *(undefined2 *)local_res20 = 0xffff;
    *(undefined4 *)((longlong)local_res20 + 4) = 0xffffffff;
    *(undefined4 *)(local_res20 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)local_res20 + 0xc) = 0xffffffff;
    *(undefined4 *)(local_res20 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)local_res20 + 0x1c) = 0xffffffff;
    *(undefined4 *)(local_res20 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)local_res20 + 0x24) = 0;
    *(undefined1 *)(local_res20 + 5) = 0;
    *(undefined4 *)((longlong)local_res20 + 0x2c) = 0xffffffff;
    *(undefined4 *)(local_res20 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)local_res20 + 0x14) = 0xffffffff;
    *(undefined4 *)(local_res20 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)local_res20 + 0x34) = 0xffffffff;
    *(undefined4 *)(local_res20 + 7) = 0xffffffff;
    param_1[5] = local_res20;
    FUN_1406f7f00(local_res20,param_2,param_3);
  }
  FUN_1405bba90(param_2,&local_res20,1);
  if ((char)local_res20 == '\0') {
    param_1[6] = 0;
  }
  else {
    puVar1 = operator_new(0xc0);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    param_1[6] = puVar1;
    FUN_140002250(param_2,puVar1);
    FUN_140002140(param_2,puVar1 + 3);
    FUN_140002140(param_2,puVar1 + 6);
    FUN_140002250(param_2,puVar1 + 9);
    FUN_140002250(param_2,puVar1 + 0xc);
    FUN_140002250(param_2,puVar1 + 0xf);
    FUN_140002140(param_2,puVar1 + 0x12);
    FUN_140002250(param_2,puVar1 + 0x15);
  }
  FUN_1405bba90(param_2,&local_res20,1);
  if ((char)local_res20 == '\0') {
    param_1[7] = 0;
  }
  else {
    local_res20 = operator_new(0x48);
    lVar2 = FUN_1406f8040(local_res20);
    param_1[7] = lVar2;
    FUN_140002250(param_2,lVar2);
    FUN_1406f5460(param_2,lVar2 + 0x18);
    FUN_1405bba90(param_2,lVar2 + 0x38,4);
    FUN_1405bba90(param_2,lVar2 + 0x3c,4);
    if (0x5c1 < param_3) {
      FUN_1405bba90(param_2,lVar2 + 0x40,4);
    }
  }
  FUN_1405bba90(param_2,&local_res20,1);
  if ((char)local_res20 == '\0') {
    param_1[8] = 0;
  }
  else {
    local_res20 = operator_new(0x170);
    uVar3 = FUN_140010740(local_res20);
    param_1[8] = uVar3;
    FUN_1407ab630(uVar3,param_2,param_3);
  }
  FUN_1405bba90(param_2,&local_res20,1);
  if ((char)local_res20 == '\0') {
    param_1[9] = 0;
  }
  else {
    local_res20 = operator_new(0x158);
    uVar3 = FUN_1406f9d70(local_res20);
    param_1[9] = uVar3;
    FUN_1407ac1c0(uVar3,param_2,param_3);
  }
  FUN_1405bba90(param_2,&local_res20,1);
  if ((char)local_res20 == '\0') {
    param_1[10] = 0;
  }
  else {
    local_res20 = operator_new(0x98);
    *local_res20 = 0;
    local_res20[1] = 0;
    local_res20[2] = 0;
    local_res20[3] = 0;
    *(undefined4 *)(local_res20 + 0x11) = 0;
    *(undefined2 *)((longlong)local_res20 + 0x8c) = 0xffff;
    local_res20[0x12] = 0;
    param_1[10] = local_res20;
    FUN_1407aae80(local_res20,param_2,param_3);
  }
  FUN_1405bba90(param_2,&local_res20,1);
  if ((char)local_res20 == '\0') {
    param_1[0xb] = 0;
  }
  else {
    local_res20 = operator_new(0x60);
    *local_res20 = 0;
    local_res20[1] = 0;
    local_res20[2] = 0;
    local_res20[3] = 0;
    local_res20[4] = 0;
    local_res20[5] = 0;
    local_res20[7] = 0;
    local_res20[8] = 0;
    local_res20[9] = 0;
    *(undefined4 *)(local_res20 + 6) = 0xffffffff;
    *(undefined4 *)(local_res20 + 10) = 0;
    local_res20[0xb] = 0;
    param_1[0xb] = local_res20;
    FUN_1406f9200(local_res20,param_2,param_3);
  }
  FUN_1405bba90(param_2,&local_res20,1);
  if ((char)local_res20 == '\0') {
    param_1[0xc] = 0;
  }
  else {
    local_res20 = operator_new(0x88);
    *local_res20 = 0;
    local_res20[1] = 0;
    local_res20[2] = 0;
    local_res20[3] = 0;
    local_res20[4] = 0;
    local_res20[5] = 0;
    local_res20[6] = 0;
    local_res20[7] = 0;
    local_res20[8] = 0;
    local_res20[9] = 0;
    local_res20[10] = 0;
    local_res20[0xb] = 0;
    local_res20[0xc] = 0;
    local_res20[0xd] = 0;
    local_res20[0xe] = 0;
    *(undefined4 *)(local_res20 + 0xf) = 0;
    local_res20[0x10] = 0;
    param_1[0xc] = local_res20;
    FUN_1407b4ee0(local_res20,param_2,param_3);
  }
  return;
}

