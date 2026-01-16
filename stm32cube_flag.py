# Custom settings, as referred to as "extra_script" in platformio.ini
#
# See http://docs.platformio.org/en/latest/projectconf.html#extra-script

Import("env")

env.Append(
    CCFLAGS=[
        "-mfloat-abi=hard", # or softfp
        "-mfpu=fpv5-sp-d16"
    ],
    LINKFLAGS=[
        "-mfloat-abi=hard", # or softp
        "-mfpu=fpv5-sp-d16"
   ]
)
