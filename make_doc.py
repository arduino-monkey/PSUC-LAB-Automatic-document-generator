import docx
from docx.shared import Inches
from write import *
import os

questions_file = 'questions\\questions3.txt'
output_path = 'output_ss\\output3'
code_path = 'answers\\answers3'

doc = docx.Document('LAB PSUC.docx')

#reading the questions
with open(questions_file) as f:
    questions = f.readlines()
    f.close()


writeHeading(doc, 'Lab no.3 – Looping Control Structures - While & Do While Loops')

for ans, output, ques, i in zip(os.listdir(code_path), os.listdir(output_path), questions, range(1, len(questions)+1)):
    writeQues(doc, 'Q' + str(i) + ') ' + ques)
    writeCode(doc, code_path + ans)
    addOutput(doc, output_path + output)
    doc.add_page_break()
doc.save('LAB PSUC.docx')