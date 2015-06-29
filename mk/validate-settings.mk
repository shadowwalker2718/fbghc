# DO NOT EDIT!  Instead, create a file mk/validate.mk, whose settings will
# override these.  See also mk/custom-settings.mk.

WERROR              = -Werror
HADDOCK_DOCS    = YES

SRC_HC_OPTS     += -H64m -O0

GhcStage1HcOpts += -O
GhcStage2HcOpts += -O -dcore-lint
# Using -O (rather than -O0) here bringes my validate down from 22mins to 16 mins.
# Compiling stage2 takes longer, but we gain a faster haddock, faster
# running of the tests, and faster building of the utils to be installed

GhcLibHcOpts    += -O -dcore-lint

BUILD_PROF_LIBS = NO

SplitObjs       = NO
NoFibWays       =
STRIP_CMD       = :

# We want to install DPH when validating, so that we can test it
InstallExtraPackages = YES

# dblatex with miktex under msys/mingw can't build the PS and PDF docs,
# and just building the HTML docs is sufficient to check that the
# markup is correct, so we turn off PS and PDF doc building when
# validating.
BUILD_DOCBOOK_PS  = NO
BUILD_DOCBOOK_PDF = NO

ifeq "$(ValidateHpc)" "YES"
GhcStage2HcOpts += -fhpc -hpcdir $(TOP)/testsuite/hpc_output/
endif
ifeq "$(ValidateSpeed)" "SLOW"
GhcStage2HcOpts += -DDEBUG
endif
