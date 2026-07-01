// FUN_14070a5d0 @ 14070a5d0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400020a0 FUN_1400020a0
//   -> 1400021b0 FUN_1400021b0
//   -> 1406f8520 FUN_1406f8520
//   -> 1406f61a0 FUN_1406f61a0
//   -> 1406f7d60 FUN_1406f7d60
//   -> 1406f5380 FUN_1406f5380
//   -> 1407ab230 FUN_1407ab230
//   -> 1407abe00 FUN_1407abe00
//   -> 1407aacf0 FUN_1407aacf0
//   -> 1406f9080 FUN_1406f9080
//   -> 1407b4c50 FUN_1407b4c50


void FUN_14070a5d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  if (*param_1 == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    lVar1 = *param_1;
    FUN_1400020a0(param_2,lVar1);
    FUN_1400021b0(param_2,lVar1 + 0x18);
  }
  if (param_1[1] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1406f8520(param_1[1],param_2);
  }
  if (param_1[2] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1400020a0(param_2,param_1[2]);
  }
  uVar2 = 1;
  if (param_1[3] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    lVar1 = param_1[3];
    FUN_1406f61a0(lVar1,param_2);
    local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(lVar1 + 0x188));
    uVar2 = 2;
  }
  FUN_1405bb7c0(param_2,local_res8,uVar2);
  if (param_1[4] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    lVar1 = param_1[4];
    FUN_1400021b0(param_2,lVar1);
    FUN_1400021b0(param_2,lVar1 + 0x18);
    FUN_1400021b0(param_2,lVar1 + 0x30);
    FUN_1400020a0(param_2,lVar1 + 0x48);
  }
  if (param_1[5] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1406f7d60(param_1[5],param_2);
  }
  if (param_1[6] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    lVar1 = param_1[6];
    FUN_1400021b0(param_2,lVar1);
    FUN_1400020a0(param_2,lVar1 + 0x18);
    FUN_1400020a0(param_2,lVar1 + 0x30);
    FUN_1400021b0(param_2,lVar1 + 0x48);
    FUN_1400021b0(param_2,lVar1 + 0x60);
    FUN_1400021b0(param_2,lVar1 + 0x78);
    FUN_1400020a0(param_2,lVar1 + 0x90);
    FUN_1400021b0(param_2,lVar1 + 0xa8);
  }
  uVar2 = 1;
  if (param_1[7] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    lVar1 = param_1[7];
    FUN_1400021b0(param_2,lVar1);
    FUN_1406f5380(param_2,lVar1 + 0x18);
    local_res8[0] = *(uint *)(lVar1 + 0x38);
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = *(uint *)(lVar1 + 0x3c);
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = *(uint *)(lVar1 + 0x40);
    uVar2 = 4;
  }
  FUN_1405bb7c0(param_2,local_res8,uVar2);
  if (param_1[8] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1407ab230(param_1[8],param_2);
  }
  if (param_1[9] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1407abe00(param_1[9],param_2);
  }
  if (param_1[10] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1407aacf0(param_1[10],param_2);
  }
  if (param_1[0xb] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1406f9080(param_1[0xb],param_2);
  }
  if (param_1[0xc] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
    return;
  }
  local_res18[0] = 1;
  FUN_1405bb7c0(param_2,local_res18,1);
  FUN_1407b4c50(param_1[0xc],param_2);
  return;
}

