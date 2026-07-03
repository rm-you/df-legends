// FUN_140285a90 @ 140285a90
// callees:
//   -> 140288480 FUN_140288480
//   -> 140002020 FUN_140002020
//   -> 140051e20 FUN_140051e20
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 140dfb5b4 free
//   -> 14000c1a0 FUN_14000c1a0
//   -> 14000c260 FUN_14000c260
//   -> 140051de0 FUN_140051de0
//   -> 1400025c0 FUN_1400025c0
//   -> 140002620 FUN_140002620
//   -> 1400030c0 FUN_1400030c0
//   -> 140284c80 FUN_140284c80
//   -> 1400022c0 FUN_1400022c0


void FUN_140285a90(void *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  
  FUN_140288480();
  lVar2 = *(longlong *)((longlong)param_1 + 0x42c0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x42d0) - lVar2 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x42c0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x42c8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x42d0) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x42a8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x42b8) - lVar2 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x42a8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x42b0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x42b8) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x4290);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x42a0) - lVar2 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x4290) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4298) = 0;
    *(undefined8 *)((longlong)param_1 + 0x42a0) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x4278);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4288) - lVar2,1);
    *(undefined8 *)((longlong)param_1 + 0x4278) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4280) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4288) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x4260);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4270) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 17000) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4270) = 0;
  }
  puVar4 = (undefined8 *)((longlong)param_1 + 0x4238);
  if (0xf < *(ulonglong *)((longlong)param_1 + 0x4250)) {
    FUN_140002020(*puVar4,*(ulonglong *)((longlong)param_1 + 0x4250) + 1,1);
  }
  *(undefined8 *)((longlong)param_1 + 0x4250) = 0xf;
  *(undefined8 *)((longlong)param_1 + 0x4248) = 0;
  if (0xf < *(ulonglong *)((longlong)param_1 + 0x4250)) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  lVar2 = *(longlong *)((longlong)param_1 + 0x4218);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4228) - lVar2 >> 3,8);
    *(undefined8 *)((longlong)param_1 + 0x4218) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4220) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4228) = 0;
  }
  _eh_vector_destructor_iterator_((void *)((longlong)param_1 + 0x41e8),0x18,2,FUN_1400025c0);
  lVar2 = *(longlong *)((longlong)param_1 + 0x41d0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x41e0) - lVar2 >> 3,8);
    *(undefined8 *)((longlong)param_1 + 0x41d0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x41d8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x41e0) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x41b8);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x41c8) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x41c0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x41c8) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x41a0);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x41b0) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x41a8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x41b0) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x4188);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4198) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x4188) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4190) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4198) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x4170);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4180) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x4170) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4178) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4180) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x4158);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4168) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x4160) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4168) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x4140);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4150) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x4140) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4148) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4150) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x4128);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4138) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x4128) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4130) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4138) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x4110);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4120) - lVar2 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x4110) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4118) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4120) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x40f8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4108) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x40f8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4100) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4108) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x40e0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x40f0) - lVar2 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x40e0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x40e8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x40f0) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x40c8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x40d8) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x40c8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x40d0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x40d8) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x40b0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x40c0) - lVar2 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x40b0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x40b8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x40c0) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x4088);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4098) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x4088) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4090) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4098) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x4070);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4080) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x4070) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4078) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4080) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x4058);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4068) - lVar2,1);
    *(undefined8 *)((longlong)param_1 + 0x4058) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4060) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4068) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x4040);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4050) - lVar2 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x4040) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4048) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4050) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x4028);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4038) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x4028) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4030) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4038) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x4010);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x4020) - lVar2 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x4010) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4018) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4020) = 0;
  }
  if (*(void **)((longlong)param_1 + 0x3f78) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x3f78));
  }
  *(undefined8 *)((longlong)param_1 + 0x3f78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3f80) = 0;
  if (*(void **)((longlong)param_1 + 0x3f68) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x3f68));
  }
  *(undefined8 *)((longlong)param_1 + 0x3f68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3f70) = 0;
  lVar2 = *(longlong *)((longlong)param_1 + 0x3f50);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3f60) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x3f50) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3f58) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3f60) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x3f38);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3f48) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x3f38) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3f40) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3f48) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x3f20);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3f30) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x3f20) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3f28) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3f30) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x3f08);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3f18) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x3f08) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3f10) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3f18) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x3ef0);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3f00) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x3ef8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3f00) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x3ed8);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3ee8) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x3ee0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3ee8) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x3ec0);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3ed0) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x3ec8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3ed0) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x3ea8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3eb8) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x3ea8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3eb0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3eb8) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x3e90);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3ea0) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x3e98) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3ea0) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x3e78);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3e88) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 16000) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3e88) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x3e60);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3e70) - lVar2 >> 3,8);
    *(undefined8 *)((longlong)param_1 + 0x3e60) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3e68) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3e70) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x3e48);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3e58) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x3e50) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3e58) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x3e30);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3e40) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x3e38) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3e40) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x3e18);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3e28) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x3e20) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3e28) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x3e00);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3e10) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x3e08) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3e10) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x3de8);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3df8) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x3df0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3df8) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x3dd0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3de0) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x3dd0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3dd8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3de0) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x3db8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3dc8) - lVar2 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x3db8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3dc0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3dc8) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x3da0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3db0) - lVar2 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x3da0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3da8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3db0) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x3d88);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3d98) - lVar2 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x3d88) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3d90) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3d98) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x3d70);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3d80) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x3d78) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3d80) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x3d58);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3d68) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x3d60) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3d68) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x3d40);
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3d50) - lVar2 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x3d48) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3d50) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x3d28);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3d38) - lVar2 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x3d28) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3d30) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3d38) = 0;
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x3d10);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)((longlong)param_1 + 0x3d20) - lVar2 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x3d10) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3d18) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3d20) = 0;
  }
  puVar4 = (undefined8 *)((longlong)param_1 + 0x3cf0);
  if (0xf < *(ulonglong *)((longlong)param_1 + 0x3d08)) {
    FUN_140002020(*puVar4,*(ulonglong *)((longlong)param_1 + 0x3d08) + 1,1);
  }
  *(undefined8 *)((longlong)param_1 + 0x3d08) = 0xf;
  *(undefined8 *)((longlong)param_1 + 0x3d00) = 0;
  if (0xf < *(ulonglong *)((longlong)param_1 + 0x3d08)) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = (undefined8 *)((longlong)param_1 + 0x3cd0);
  if (0xf < *(ulonglong *)((longlong)param_1 + 0x3ce8)) {
    FUN_140002020(*puVar4,*(ulonglong *)((longlong)param_1 + 0x3ce8) + 1,1);
  }
  *(undefined8 *)((longlong)param_1 + 0x3ce8) = 0xf;
  *(undefined8 *)((longlong)param_1 + 0x3ce0) = 0;
  if (0xf < *(ulonglong *)((longlong)param_1 + 0x3ce8)) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = (undefined8 *)((longlong)param_1 + 0x3cb0);
  if (0xf < *(ulonglong *)((longlong)param_1 + 0x3cc8)) {
    FUN_140002020(*puVar4,*(ulonglong *)((longlong)param_1 + 0x3cc8) + 1,1);
  }
  *(undefined8 *)((longlong)param_1 + 0x3cc8) = 0xf;
  *(undefined8 *)((longlong)param_1 + 0x3cc0) = 0;
  if (0xf < *(ulonglong *)((longlong)param_1 + 0x3cc8)) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = (undefined8 *)((longlong)param_1 + 0x3c88);
  if (0xf < *(ulonglong *)((longlong)param_1 + 0x3ca0)) {
    FUN_140002020(*puVar4,*(ulonglong *)((longlong)param_1 + 0x3ca0) + 1,1);
  }
  *(undefined8 *)((longlong)param_1 + 0x3ca0) = 0xf;
  *(undefined8 *)((longlong)param_1 + 0x3c98) = 0;
  if (0xf < *(ulonglong *)((longlong)param_1 + 0x3ca0)) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = (undefined8 *)((longlong)param_1 + 0x3c68);
  if (0xf < *(ulonglong *)((longlong)param_1 + 0x3c80)) {
    FUN_140002020(*puVar4,*(ulonglong *)((longlong)param_1 + 0x3c80) + 1,1);
  }
  *(undefined8 *)((longlong)param_1 + 0x3c80) = 0xf;
  *(undefined8 *)((longlong)param_1 + 0x3c78) = 0;
  if (0xf < *(ulonglong *)((longlong)param_1 + 0x3c80)) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  if (0xf < *(ulonglong *)((longlong)param_1 + 0x3c60)) {
    FUN_140002020(*(undefined8 *)((longlong)param_1 + 0x3c48),
                  *(ulonglong *)((longlong)param_1 + 0x3c60) + 1,1);
  }
  *(undefined8 *)((longlong)param_1 + 0x3c60) = 0xf;
  *(undefined8 *)((longlong)param_1 + 0x3c58) = 0;
  puVar3 = (undefined1 *)FUN_14000c1a0((longlong)param_1 + 0x3c48);
  *puVar3 = 0;
  FUN_14000c260((longlong)param_1 + 0x3c18);
  FUN_14000c260((longlong)param_1 + 0x3bf8);
  FUN_14000c260((longlong)param_1 + 0x3bd8);
  FUN_14000c260((longlong)param_1 + 0x3ba8);
  FUN_14000c260((longlong)param_1 + 0x3b88);
  FUN_14000c260((longlong)param_1 + 0x3b68);
  FUN_14000c260((longlong)param_1 + 0x3b40);
  FUN_14000c260((longlong)param_1 + 0x3b20);
  FUN_14000c260((longlong)param_1 + 0x3b00);
  FUN_14000c260((longlong)param_1 + 0x3ad0);
  FUN_14000c260((longlong)param_1 + 0x3ab0);
  FUN_14000c260((longlong)param_1 + 0x3a90);
  FUN_14000c260((longlong)param_1 + 0x3a68);
  FUN_14000c260((longlong)param_1 + 0x3a48);
  FUN_14000c260((longlong)param_1 + 0x3a28);
  FUN_140051de0((longlong)param_1 + 0x3a08);
  FUN_140051de0((longlong)param_1 + 0x39f0);
  FUN_140051de0((longlong)param_1 + 0x39d8);
  FUN_1400025c0((longlong)param_1 + 0x39c0);
  FUN_140002620((longlong)param_1 + 0x39a8);
  _eh_vector_destructor_iterator_((void *)((longlong)param_1 + 0x28c8),0x20,0x87,FUN_14000c260);
  _eh_vector_destructor_iterator_((void *)((longlong)param_1 + 0x17e8),0x20,0x87,FUN_14000c260);
  FUN_1400025c0((longlong)param_1 + 0x17d0);
  FUN_1400025c0((longlong)param_1 + 0x17b8);
  FUN_140002620((longlong)param_1 + 0x17a0);
  _eh_vector_destructor_iterator_((void *)((longlong)param_1 + 0x1738),0x18,4,FUN_1400025c0);
  _eh_vector_destructor_iterator_((void *)((longlong)param_1 + 0x16d8),0x18,4,FUN_1400025c0);
  FUN_1400030c0((longlong)param_1 + 0x16c0);
  FUN_1400030c0((longlong)param_1 + 0x16a8);
  FUN_1400030c0((longlong)param_1 + 0x1690);
  FUN_1400025c0((longlong)param_1 + 0x1678);
  FUN_140002620((longlong)param_1 + 0x1660);
  FUN_140002620((longlong)param_1 + 0x1648);
  FUN_140002620((longlong)param_1 + 0x1630);
  FUN_140002620((longlong)param_1 + 0x1618);
  FUN_1400025c0((longlong)param_1 + 0x1600);
  FUN_1400030c0((longlong)param_1 + 0x15e8);
  FUN_1400030c0((longlong)param_1 + 0x15d0);
  FUN_1400025c0((longlong)param_1 + 0x15b8);
  FUN_1400025c0((longlong)param_1 + 0x15a0);
  FUN_140051de0((longlong)param_1 + 0x8a8);
  FUN_1400025c0((longlong)param_1 + 0x890);
  FUN_140284c80((longlong)param_1 + 0x6c0);
  FUN_1400022c0((longlong)param_1 + 0x6a8);
  _eh_vector_destructor_iterator_(param_1,0x20,0x23,FUN_14000c260);
  return;
}

