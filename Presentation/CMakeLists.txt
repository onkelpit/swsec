CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(UseLATEX_DOC NONE)
INCLUDE(UseLATEX.cmake)
SET(LATEX_OUTPUT_PATH build)
#LATEX_GET_OUTPUT_PATH(build)

#ADD_CUSTOM_COMMAND(OUTPUT build/generated_file.tex
#    COMMAND tex_file_generate_exe
#    ARGS build/generated_file.tex
#    )
ADD_LATEX_DOCUMENT(grsec.tex INPUTS context.tex IMAGE_DIRS img DEFAULT_PDF BIBFILES Quellen.bib)
