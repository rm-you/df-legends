// FUN_1400be3f0 @ 1400be3f0
// callees:
//   -> EXTERNAL:000000aa _Init
//   -> EXTERNAL:00000104 _get_stream_buffer_pointers


void FUN_1400be3f0(basic_streambuf<char,std::char_traits<char>_> *param_1,longlong param_2,
                  int param_3)

{
  undefined8 local_res8;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  param_1[0x71] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
  param_1[0x7c] = (basic_streambuf<char,std::char_traits<char>_>)(param_3 == 1);
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
  if (param_2 != 0) {
    local_res8 = 0;
    local_res10[0] = 0;
    local_res20 = 0;
    _get_stream_buffer_pointers(param_2,&local_res8,local_res10,&local_res20);
    *(undefined8 *)(param_1 + 0x18) = local_res8;
    *(undefined8 *)(param_1 + 0x20) = local_res8;
    *(undefined8 *)(param_1 + 0x38) = local_res10[0];
    *(undefined8 *)(param_1 + 0x40) = local_res10[0];
    *(undefined8 *)(param_1 + 0x50) = local_res20;
    *(undefined8 *)(param_1 + 0x58) = local_res20;
  }
  *(undefined8 *)(param_1 + 0x74) = DAT_14127eb98;
  *(longlong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}

