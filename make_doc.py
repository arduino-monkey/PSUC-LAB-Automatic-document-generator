import docx
from docx.shared import Inches
from write import *
import os

questions_file = 'questions\\questions4.txt'
output_path = 'screenshots\\'
code_path = 'answers\\answers4\\'

doc = docx.Document('LAB_PSUC.docx')
# doc = docx.Document()

#reading the questions
with open(questions_file) as f:
    questions = f.readlines()
    f.close()


# writeHeading(doc, 'Lab no.3 – Looping Control Structures - While and Do-While loops')
# writeHeading(doc, 'Lab no.4 – Looping Control Structures - For loops')
for ans, output, ques, i in zip(os.listdir(code_path), os.listdir(output_path), questions, range(1, len(questions)+1)):
    writeQues(doc, 'Q' + str(i) + ') ' + ques)
    writeCode(doc, code_path + ans)
    addOutput(doc, output_path + output)
    doc.add_page_break()
doc.save('LAB_PSUC.docx')