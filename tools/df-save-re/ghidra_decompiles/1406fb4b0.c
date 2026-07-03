// FUN_1406fb4b0 @ 1406fb4b0
// callees:
//   -> 1406fb620 FUN_1406fb620
//   -> 1406f8710 FUN_1406f8710
//   -> 140dfb5b4 free
//   -> 1406fb6a0 FUN_1406fb6a0
//   -> 1401b7d10 FUN_1401b7d10
//   -> 1406fb720 FUN_1406fb720
//   -> 1403027d0 FUN_1403027d0
//   -> 1400c2c50 FUN_1400c2c50
//   -> 1406f98f0 FUN_1406f98f0
//   -> 1406f9e70 FUN_1406f9e70
//   -> 1406fa310 FUN_1406fa310
//   -> 1406f8ec0 FUN_1406f8ec0
//   -> 1406fb1b0 FUN_1406fb1b0


void FUN_1406fb4b0(longlong *param_1)

{
  void *pvVar1;
  
  if (*param_1 != 0) {
    FUN_1406fb620();
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    FUN_1406f8710(pvVar1);
    free(pvVar1);
  }
  if (param_1[2] != 0) {
    FUN_1406fb6a0();
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    FUN_1401b7d10(pvVar1);
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    FUN_1406fb720(pvVar1);
    free(pvVar1);
  }
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    FUN_1403027d0(pvVar1);
    free(pvVar1);
  }
  if (param_1[7] != 0) {
    FUN_1400c2c50();
  }
  pvVar1 = (void *)param_1[8];
  if (pvVar1 != (void *)0x0) {
    FUN_1406f98f0(pvVar1);
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    FUN_1406f9e70(pvVar1);
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    FUN_1406fa310(pvVar1);
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[0xb];
  if (pvVar1 != (void *)0x0) {
    FUN_1406f8ec0(pvVar1);
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[0xc];
  if (pvVar1 != (void *)0x0) {
    FUN_1406fb1b0(pvVar1);
    free(pvVar1);
  }
  return;
}

