from selenium import webdriver
from selenium.webdriver.support.ui import WebDriverWait

driver = webdriver.Chrome(r'/home/anish/resume/CARDS/chromedriver')
driver.get('https://web.whatsapp.com/')

name = input('Enter the name of user or group : ')
msg = input('Enter your message : ')
count = int(input('Enter the count : '))
wait = WebDriverWait(driver = driver, timeout = 900)

user = driver.find_element_by_xpath('//span[@title = "{}"]'.format(name))
user.click()

msg_box = driver.find_element_by_class_name('_2S1VP')
msg += '\n this is a system generated message'

for i in range(count):
    msg_box.send_keys(msg)
    button = driver.find_element_by_class_name('_2lkdt')
    button.click()
