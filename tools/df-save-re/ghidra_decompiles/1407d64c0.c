// FUN_1407d64c0 @ 1407d64c0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0
//   -> 140010bc0 FUN_140010bc0
//   -> 1407d58e0 FUN_1407d58e0
//   -> 1407d5e30 FUN_1407d5e30
//   -> 1407d5b00 FUN_1407d5b00


void FUN_1407d64c0(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1400021b0(param_2,param_1 + 2);
  local_res18[0] = param_1[8];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[9];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[10];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_140010bc0(param_1 + 0xc,param_2);
  local_res18[0] = param_1[0x16];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x17];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x18];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x19];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x1a];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_140010bc0(param_1 + 0x1c,param_2);
  local_res18[0] = param_1[0x26];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x27];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x28];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x34];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x39];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x3a];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x3b];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = CONCAT22(local_res18[0]._2_2_,*(undefined2 *)(param_1 + 0x3c));
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0] = param_1[0x35];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x36];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x37];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x38];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x3d];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x3e];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x3f];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x40];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x41];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x42];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x43];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_140010bc0(param_1 + 0x2a,param_2);
  iVar1 = param_1[1];
  if (iVar1 == 6) {
    FUN_1407d5b00(*(undefined8 *)(param_1 + 0x44),param_2);
  }
  else {
    if (iVar1 == 7) {
      FUN_1407d5e30(*(undefined8 *)(param_1 + 0x44),param_2);
      return;
    }
    if (iVar1 == 8) {
      FUN_1407d5e30(*(undefined8 *)(param_1 + 0x44),param_2);
      return;
    }
    if (iVar1 == 9) {
      FUN_1407d58e0(*(undefined8 *)(param_1 + 0x44),param_2);
      return;
    }
    if (iVar1 == 10) {
      FUN_1407d58e0(*(undefined8 *)(param_1 + 0x44),param_2);
      return;
    }
  }
  return;
}

