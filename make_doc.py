import docx
from docx.shared import Inches
from write import *
import os

questions_file = 'questions\\questions6.txt'
output_path = 'screenshots\\'
code_path = 'answers\\answers6\\'

doc = docx.Document('LAB_PSUC.docx')
# doc = docx.Document()

#reading the questions
with open(questions_file) as f:
    questions = f.readlines()
    f.close()


# writeHeading(doc, 'Lab no.5 – 1D Arrays')
writeHeading(doc, 'Lab no.6 – 2D Arrays')
for ans, output, ques, i in zip(os.listdir(code_path), os.listdir(output_path), questions, range(1, len(questions)+1)):
    writeQues(doc, 'Q' + str(i) + ') ' + ques)
    writeCode(doc, code_path + ans)
    addOutput(doc, output_path + output)
    doc.add_page_break()
doc.save('LAB_PSUC.docx')