# Yeah, I'm gonna try to make a makefile. Let's see how bad I screw up.

NAME = "-0.9.2"
EXTRAVERSION = "rc1"

# The one file here at platypus-os-desktop-pre-alpha/
# :)

obj-y += foo-bar.o

# ALLLLLL the folders :\

obj-$(CONFIG_CLI_PLATYPROMPT) += cli/platyprompt/
obj-$(CONFIG_CPU) += cpu/
obj-$(CONFIG_GUI) += gui/
obj-$(CONFIG_ENCRYPTION) += encryption/
obj-$(CONFIG_DEVICES) += devices/
obj-$(CONFIG_DOCUMENTATION) += documentation/
obj-$(CONFIG_FS) += fs/
obj-$(CONFIG_INCLUDE) += include/
obj-$(CONFIG_KERNEL) += kernel/
obj-$(CONFIG_EMGRAPH) += libraries/graphics/emerald/libk/
obj-$(CONFIG_MEMORY) += memory/
obj-$(CONFIG_INTERNET) += net/
obj-$(CONFIG_SECURITY) += security/

# I'm gonna experiment with execution of stuff :)

# Bootup message

obj-y += kernel/startup/main.c
